import sys
n = int(input())

A = []
for i in range(n):
    a, b = map(int, (input().split()))
    A.append([a,b])
for i in range(len(A)):
    a, b = A[i]
    cur_num = 1
    for j in range(len(A)):
        if i == j:
            continue
        tmp_a, tmp_b = A[j]
        if a < tmp_a and b < tmp_b:
            cur_num += 1
    print(cur_num, end=" ")
