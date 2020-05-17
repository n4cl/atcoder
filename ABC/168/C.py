import math
a, b, h, m = map(int, input().split())

m_a = m * 6
h_a = h * 30
if m > 0:
    h_a = h_a + m * 0.5
print(math.sqrt(a ** 2 + b ** 2 - (2 * a * b * math.cos(math.radians(max(m_a, h_a) - min(m_a, h_a))))))
