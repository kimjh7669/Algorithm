import sys
N = int(input())
array = list(map(int, input().split(' ')))
dp = [1]*N

for i in range(1, N):
        for j in range(i):
                if array[i] > array[j]:
                        dp[i] = max(dp[i], dp[j] + 1)
print(max(dp))
