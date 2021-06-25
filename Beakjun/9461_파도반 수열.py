#1, 1, 1, 2, 2, 3, 4, 5, 7, 9
N = int(input())
A = []
for i in range(N):
        A.append(int(input()))

for j in A:
        dp = [1]* (j+1)
        for i in range(4,j + 1):
                dp[i] = dp[i-2] + dp[i-3]
        print(dp[j])
