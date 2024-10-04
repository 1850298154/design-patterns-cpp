# Python 3.7 引入了 from __future__ import annotations，允许使用字符串来延迟类型注解。这种方式可以避免在类定义时遇到未定义的名称错误。


# from __future__ import annotations

class A:
    def __init__(self):
        self.b: B = None  # 使用字符串进行延迟类型注解

class B:
    def __init__(self):
        self.a: A = None  # 使用字符串进行延迟类型注解

# 示例
a = A()
b = B()

a.b = b
b.a = a  # 循环引用
