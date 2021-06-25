import sys
N, K = map(int, sys.stdin.readline().split(' '))
a = list(map(int, sys.stdin.readline().split(' ')))
a.sort()

print(a[K-1])
