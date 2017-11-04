# coding: utf-8

def main():
    n = input()
    l = []
    for i in xrange(1, n+1):
        s = i ** 2
        l.append(s)

        if s > n:
            print l[-2]
            return

    print 1

main()