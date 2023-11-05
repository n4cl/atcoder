n = input()
s = input()

for i in range(len(s)-1):
    if (s[i] == "a" and s[i+1] == "b") or (s[i] == "b" and s[i+1] == "a"):
        print("Yes")
        exit()

print("No")
