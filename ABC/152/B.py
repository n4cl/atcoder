a, b = input().split()

aa = a * int(b)
bb = b * int(a)

if aa > bb:
    print(bb)
else:
    print(aa)

