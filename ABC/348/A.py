n = int(input())
print(*["x" if i % 3 == 0 else "o" for i in range(1, n+1)], sep="")
