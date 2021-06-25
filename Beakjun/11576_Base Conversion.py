import sys
not_A, not_B = map(int,input().split(' '))
m = int(input())
lst = list(map(int, sys.stdin.readline().strip().split(' ')))

not_10 = 0
for i in range(len(lst)):
        not_10 += lst[i] * (not_A ** (len(lst) - i - 1))
str_10 = str(not_10)
answer = []
while not_10:
        Rem = not_10 % not_B
        not_10 = not_10 // not_B
        answer.append(Rem)
answer.reverse()

print(" ".join(map(str, answer)))
