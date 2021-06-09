import sys
N = int(input())
def factorial(N):
        if N == 1:
                return 1
        else:
                Y = N * factorial(N-1)
                return Y
if N == 0:
        print(0)
else:
        Y = str(factorial(N))
        cnt = 0
        for i in range(len(Y) - 1, -1, -1):
                if Y[i] == "0":
                        cnt += 1
                else:
                        break
        print(cnt)
