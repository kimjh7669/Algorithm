import sys
M, N = map(int, input().split(' '))
answer = [0] * N
answer[0] = 1
for i in range(1, N//2 + 1):
        for j in range(2, (N//(i+1))+1):
                duv = ((i+1) * j) % N
                if duv >= N:
                        break

                answer[duv - 1] = 1

for i in range(M - 1, N):
        if answer[i] ==0:
                print(i+1)
