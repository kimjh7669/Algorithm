import sys
A, B = map(int, input().split(' '))
C = min(A,B)
D = max(A,B)
chleo = 1
for i in range(1, C +1):
        if A%i == 0 and B % i == 0:
                chleo = i
chlth = D * (C / chleo)
print(chleo)
print(int(chlth))
