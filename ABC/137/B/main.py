# coding: utf-8


def main():
    a, b = map(int, input().split())

    mx = a + b

    tmp = a - b
    if mx < tmp:
        mx = tmp

    tmp = a * b
    if mx < tmp:
        mx = tmp

    print(mx)

main()
