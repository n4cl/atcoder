# coding: utf-8

O = raw_input()
E = raw_input()

if len(O) > len(E):
    E += " "

passwd = ""

for o, e in zip(O, E):
    passwd += o + e

passwd = passwd.replace(" ", "")
print passwd
