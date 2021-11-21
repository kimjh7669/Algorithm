import sys
N = int(input())
lst_num = list(map(int, input().split()))
lst_num.sort()
answer = 0
for i in range(N):
    answer += lst_num[i] * (N-i)
print(answer)
