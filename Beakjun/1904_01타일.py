import sys
N = int(input())
before2 = 0
before1 = 1
answer = 0


for i in range(1, N+1):
    if i == 1:
        answer = 1
        continue
    elif i == 2:
        answer = 2
        continue
    before2 = before1
    before1 = answer
    answer = before1 + before2
    answer %= 15746
print(answer)
