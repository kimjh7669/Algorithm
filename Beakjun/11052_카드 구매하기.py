N = int(input())
arr = [0]
arr1 = list(map(int, input().split(' ')))
for i in arr1:
        arr.append(i)

dp = [0]*(N)
dp[0] = arr1[0]
dp[1] = max(arr1[1], dp[0] * 2)
answer = 0

for i in range(2,N):
        if i % 2 == 0:
                for j in range(int(i // 2)):
                        answer = max(answer, dp[j] + dp[i - j- 1])
        else:
                for j in range((i // 2) + 1):
                        answer = max(answer, dp[j] + dp[i - j - 1])
        dp[i] = max(arr1[i], answer)
print(dp[N-1])
