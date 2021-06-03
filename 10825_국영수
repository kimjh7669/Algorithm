import sys
N = int(input())
arr = []
for i in range(N):
        name, kor, eng, math = map(str, sys.stdin.readline().split())
        kor = int(kor)
        eng = int(eng)
        math = int(math)
        arr.append((name, kor, eng, math))

arr = sorted(arr, key = lambda key_value: key_value[0])
arr.sort(key = lambda key_value: key_value[3], reverse = True)
arr.sort(key = lambda key_value: key_value[2])
arr.sort(key = lambda key_value: key_value[1], reverse = True)
for i in arr:
        print(i[0])
