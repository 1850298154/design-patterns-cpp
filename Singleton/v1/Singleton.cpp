#include<atomic>
#include<mutex>

class Lock{

};


class Singleton{
private:
    Singleton();
    Singleton(const Singleton& other);
public:
    static Singleton* getInstance();
    static Singleton* m_instance;
};

Singleton* Singleton::m_instance=nullptr;

//线程非安全版本
Singleton* Singleton::getInstance() {
    if (m_instance == nullptr) {
        m_instance = new Singleton();
    }
    return m_instance;
}






//线程安全版本，但锁的代价过高
Singleton* Singleton::getInstance() {
    Lock lock;
    if (m_instance == nullptr) {
        m_instance = new Singleton();
    }
    return m_instance;
}








// 不能使用 ， 编译器不加 volatile 会出错
//双检查锁，但由于内存读写reorder不安全
Singleton* Singleton::getInstance() {
    
    if(m_instance==nullptr){
        Lock lock;
        if (m_instance == nullptr) {
            m_instance = new Singleton();
        }
    }
    return m_instance;
}








//C++ 11版本之后的跨平台实现 (volatile)
std::atomic<Singleton*> Singleton::m_instance;                                  //  1. 原子指针： 原子对象，里面是指针 ，保证原子性    
std::mutex Singleton::m_mutex;                                                  //     load获取指针    

Singleton* Singleton::getInstance() {
    Singleton* tmp = m_instance.load(std::memory_order_relaxed);                //  2. 使用load方式获取指针 ， 这个指针可以屏蔽编译器的 reorder
    std::atomic_thread_fence(std::memory_order_acquire);//获取内存fence         //  3. 怎么屏蔽的？：atomic_thread_fence获取内存屏障fence， 内存 reorder 的保护 确保获取的内存是最新的。 之后 tmp在赋值的时候 在内存不会被reorder
    if (tmp == nullptr) {
        std::lock_guard<std::mutex> lock(m_mutex);                              //  4. 加锁 还是需要
        tmp = m_instance.load(std::memory_order_relaxed);                       //  5. 再次load获取指针
        if (tmp == nullptr) {
            tmp = new Singleton;
            std::atomic_thread_fence(std::memory_order_release);//释放内存fence //  6. release 对应 acquire
            m_instance.store(tmp, std::memory_order_relaxed);                   //  7. 存储指针， 存回去
        }
    }
    return tmp;
}








