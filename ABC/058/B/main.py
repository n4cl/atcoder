# coding: utf-8

o = raw_input()
e = raw_input()
passwd = ""

for i in range(0, len(o)):
    passwd += o[i]
    if i < len(e):
        passwd += e[i]

print passwd
