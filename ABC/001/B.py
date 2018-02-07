# coding: utf-8

m = input()

if m < 100:
    v = 0

elif m <= 5000:
    v = m / 100

elif m >= 6000 and m <= 30000:
    v = m / 1000 + 50

elif m >= 35000 and m <= 70000:
    v = (m / 1000 - 30) / 5 + 80

else:
    v = 89

print "{:02d}" .format(v)
