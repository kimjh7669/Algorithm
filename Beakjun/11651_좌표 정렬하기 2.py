import sys
N = int(input())
arr = []
for i in range(N):
        arr.append(list(map(int,sys.stdin.readline().split(' '))))

arr1 = []
for i in arr:
        arr1.append([i[1], i[0]])

arr1.sort()
for i in arr1:
        print(str(i[1]) + " " + str(i[0]))
