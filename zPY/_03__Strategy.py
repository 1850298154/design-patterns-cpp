 
from abc import ABC, abstractmethod

# 定义策略接口
class Strategy(ABC):
    @abstractmethod
    def execute(self, data):
        pass

# 具体策略A
class ConcreteStrategyA(Strategy):
    def execute(self, data):
        return f"Strategy A: {data}"

# 具体策略B
class ConcreteStrategyB(Strategy):
    def execute(self, data):
        return f"Strategy B: {data}"

# 上下文类
class Context:
    def __init__(self, strategy: Strategy):
        self._strategy = strategy

    def set_strategy(self, strategy: Strategy):
        self._strategy = strategy

    def execute_strategy(self, data):
        return self._strategy.execute(data)

# 使用示例
if __name__ == "__main__":
    context = Context(ConcreteStrategyA())
    print(context.execute_strategy("Test Data"))

    context.set_strategy(ConcreteStrategyB())
    print(context.execute_strategy("Test Data"))