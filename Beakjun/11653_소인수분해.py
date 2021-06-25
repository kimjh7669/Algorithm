import sys
N = int(input())
def decompose(N):
        if N == 2:
                print(N)
        else:
                for i in range(2, N + 1):
                        if N % i == 0:
                                print(i)
                                if i == N:
                                        break
                                else:
                                        X = N // i
                                        decompose(X)
                                        break

decompose(N)
