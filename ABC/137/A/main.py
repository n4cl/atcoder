# coding: utf-8


def main():
    k, x = map(int, input().split())

    mx = x + k - 1
    mi = x - k + 1

    l = [str(i) for i in range(mi, mx + 1)]
    print(" ".join(l))

main()
