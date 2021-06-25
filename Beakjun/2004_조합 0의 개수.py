import sys
N, M = map(int, input().split(' '))
N_M = N-M

def five(R):
        Y = 0
        while R > 4:
                R //= 5
                Y += R
        return Y

def two(R):
        Y = 0
        while R > 1:
                R //= 2
                Y += R
        return Y

a = five(N) - five(M) - five(N_M)
b = two(N) - two(M) - two(N_M)
print(min(a,b))
