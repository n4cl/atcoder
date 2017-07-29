# coding: utf-8

n = input()
m = 0
rank = 1
for i in range(1, n+1):
    j = i
    c = 0
    while True:
        if j % 2 == 0:
            j /= 2
            c += 1

        else:
            if m < c:
                m = c
                rank = i
            break

print rank
