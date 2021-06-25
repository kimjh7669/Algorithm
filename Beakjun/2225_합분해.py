import sys
N, K = map(int, (input().split(' ')))
dp = [1] * (N + 1)

for j in range(K-2):
        for i in range(1, N+ 1):
                dp[i] = dp[i] + dp[i-1]
if K == 1:
    print(1)
else:
    print(sum(dp)%1000000000)
