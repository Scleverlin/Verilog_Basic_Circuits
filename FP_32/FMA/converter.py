def ieee754_to_float(binary_string):
    # 检查输入是否为32位
    if len(binary_string) != 32:
        raise ValueError("Input must be a 32-bit binary string.")

    # 提取符号位、指数位和尾数位
    sign = int(binary_string[0])
    exponent = int(binary_string[1:9], 2)
    mantissa = binary_string[9:]

    # 计算指数值
    exponent = exponent - 127

    # 计算尾数值
    mantissa_value = 1  # 初始化为1，因为是规格化的数
    for i, bit in enumerate(mantissa):
        mantissa_value += int(bit) * 2**(-i-1)

    # 计算最终的浮点数
    float_value = (-1)**sign * mantissa_value * 2**exponent

    return float_value

# 示例：转换32位IEEE-754格式的数据
binary_string = "01001011001110110000010110101111"  # 例如，这是5.5的IEEE-754表示
decimal_value = ieee754_to_float(binary_string)

# 显示小数点后8位
formatted_value = "{:.8f}".format(decimal_value)
print(f"Decimal value with 8 decimal places: {formatted_value}")
