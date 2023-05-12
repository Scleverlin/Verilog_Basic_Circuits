def calculate_An_x(n, x, memo=None):
    if memo is None:
        memo = {}

    if (n, x) in memo:
        return memo[(n, x)]

    if n <= x:
        result = 2 ** n
    else:
        result = sum(calculate_An_x(n - 1 - j, x, memo) for j in range(x + 1))

    memo[(n, x)] = result
    return result

n = 16
x = 16
result = calculate_An_x(n, x)
print(f"An({n},{x}) = {result}")

for i in range (0,64):
    y=calculate_An_x(64,i)/2**64
    if (y>0.9999):
      print(i)
      break
    



