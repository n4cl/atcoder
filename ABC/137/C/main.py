# coding: utf-8

def main():
    n = int(input())
    l = ["".join(sorted(input())) for i in range(n)]

    c = {}
    ans = 0
    for s in l:
        if s in c:
            c[s] = c[s] + 1
        else:
            c[s] = 0
        ans += c[s]

    print(ans)

main()
