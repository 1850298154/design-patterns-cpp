from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from _b import B  # 假设 B 定义在另一个文件中

class A:
    def __init__(self):
        self.b: B  # 类型提示

# # b.py 文件
# class B:
#     def __init__(self):
#         self.a: A  # 类型提示
