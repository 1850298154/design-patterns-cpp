 
from abc import ABC, abstractmethod

# 定义观察者接口
class Observer(ABC):
    @abstractmethod
    def update(self, message: str):
        pass

# 具体观察者A
class ConcreteObserverA(Observer):
    def update(self, message: str):
        print(f"Observer A received: {message}")

# 具体观察者B
class ConcreteObserverB(Observer):
    def update(self, message: str):
        print(f"Observer B received: {message}")

# 被观察者
class Subject:
    def __init__(self):
        self._observers = []

    def attach(self, observer: Observer):
        self._observers.append(observer)

    def detach(self, observer: Observer):
        self._observers.remove(observer)

    def notify(self, message: str):
        for observer in self._observers:
            observer.update(message)

# 使用示例
if __name__ == "__main__":
    subject = Subject()

    observer_a = ConcreteObserverA()
    observer_b = ConcreteObserverB()

    subject.attach(observer_a)
    subject.attach(observer_b)

    subject.notify("Hello, Observers!")

    subject.detach(observer_a)

    subject.notify("Observer A has been detached.")