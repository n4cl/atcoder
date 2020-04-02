from math import factorial
n, m = map(int, input().split())
x = 0
y = 0
if n >= 2:
    x = factorial(n) / factorial(2) / factorial(n - 2)

if m >= 2:
    y = factorial(m) / factorial(2) / factorial(m - 2)

print(int(x+y))

