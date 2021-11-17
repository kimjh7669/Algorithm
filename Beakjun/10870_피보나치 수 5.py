import sys
N = int(input())
a, b, c = 0, 1, 1
for i in range(N-2):
    a = b
    b = c
    c = a + b
if N == 0:
    print(0)
elif N == 1:
    print(1)
elif N == 1:
    print(1)
else:
    print(c)
