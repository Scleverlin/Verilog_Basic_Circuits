import numpy as np

class FP16Calculator:
    def __init__(self):
        pass

    def add(self, a, b):
        return np.float16(a) + np.float16(b)

    def subtract(self, a, b):
        return np.float16(a) - np.float16(b)

    def multiply(self, a, b):
        return np.float16(a) * np.float16(b)

    def divide(self, a, b):
        # 防止除以0
        if b == 0:
            return "Error: Division by zero is not allowed."
        return np.float16(a) / np.float16(b)

# 创建FP16计算器实例
calculator = FP16Calculator()

# 测试加法
result_fma = calculator.add(calculator.multiply(1.5, 2.25), 2.25)
print ("result_fma = ", result_fma)
# result_multiply = 
# 测试除法


