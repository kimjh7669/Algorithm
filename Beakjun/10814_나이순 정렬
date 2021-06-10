import sys
N = int(input())
arr = []
for i in range(N):
        age, name = map(str, sys.stdin.readline().split())
        age = int(age)
        arr.append((age, name))

arr.sort(key = lambda key_value : key_value[0])
for i in arr:
        print(i[0], i[1])
