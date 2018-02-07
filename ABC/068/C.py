# coding: utf-8


def main():
    n, m = map(int, raw_input().split())

    s = [0] * 200010
    t = [0] * 200010
    for _ in xrange(m):
        a, b = map(int, raw_input().split())
        if a == 1:
            s[b] = True
        if b == n:
            t[a] = True

    for i in xrange(1, n+1):
        if s[i] and t[i]:
            print "POSSIBLE"
            return

    print "IMPOSSIBLE"

main()
