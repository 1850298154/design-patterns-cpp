#include "template2_lib.cpp"
#include <iostream>

using namespace std;

//应用程序开发人员
class Application : public Library
{
  protected:
	virtual bool Step2()
	{
		//... 子类重写实现
		cout << "override Step2" << endl;
        std::cout << "Class Name: " << typeid(*this).name() << std::endl; // 输出当前类名
        std::cout << "Function Name: " << __func__ << std::endl; // 输出当前函数名
		return true;
	}

	virtual void Step4()
	{
		//... 子类重写实现
		cout << "override Step4" << endl;
	}
	virtual ~Application() { cout << "Application" << endl; } 
};

int main()
{
	Library *pLib = new Application();
	pLib->Run();

	delete pLib;
}
