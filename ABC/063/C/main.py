# coding: utf-8

n = input()
s = map(int, [raw_input() for _ in xrange(n)])
s.sort(reverse=True)
t = 0
while True:

    for i in xrange(1, len(s) + 1):
        total = sum(s) - t

        if total % 10 != 0:
            print total
            exit()

        t = s[-i]

    s.pop()

    if not s:
        print 0
        break
