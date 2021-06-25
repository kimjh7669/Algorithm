import sys
from itertools import combinations
N = int(input())
for i in range(N):
        lst = list(map(int, sys.stdin.readline().strip().split(' ')))
        answer = 0
        comb = combinations(lst[1:], 2)
        for i in list(comb):
                A = i[0]
                B = i[1]
                if A < B:
                        A, B = B, A
                while B:
                        C = A % B
                        A = B
                        B = C 
                answer += A
        print(answer)
