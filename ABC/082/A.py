# coding: utf-8

import math

n = map(int, raw_input().split())

print int(math.ceil(sum(n) / 2.0))
