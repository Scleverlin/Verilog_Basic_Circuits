# Correcting the function based on our manual calculation
def parse_base4_number(s: str) -> int:
    value = 0
    power = len(s.replace('-', '')) - 1  # Initialize with the highest power
    
    i = 0
    while i < len(s):
        if s[i] == '-':
            value -= int(s[i+1]) * (4 ** power)
            i += 2
        else:
            value += int(s[i]) * (4 ** power)
            i += 1
        power -= 1
    return value

# Test the function again
test_input2 = "10002-11-2011-1-1"
print (parse_base4_number(test_input2))
