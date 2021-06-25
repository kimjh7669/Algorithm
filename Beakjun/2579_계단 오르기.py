import sys

N = int(input())
array = []
for line in sys.stdin:
        array.append(int(line))

dp = [0]
dp.append(array[0])
if N >1:
    dp.append(array[0] + array[1])
for i in range(3, N+1):
        case1 = dp[i-2] + array[i-1]
        case2 = dp[i-3] + array[i-2] + array[i-1]
        dp.append(max(case1, case2))

print(dp[N])
