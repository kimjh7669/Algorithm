import sys
N = int(input())
array = list(map(int, input().split(' ')))
dp= []
dp.append(array[0])

for i in range(1, N):
        array[i] = max(array[i], array[i-1] + array[i])
print(array)
