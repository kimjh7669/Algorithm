import sys
N, B = input().split(' ')
B = int(B)

answer = 0
len_N = len(N)
for i in range(len_N-1,-1,-1):
        if ord(N[len_N - i - 1])>=65 and ord(N[len_N - i - 1]) <= 91:
                answer += (ord(N[len_N - i - 1]) - 55) * (B**i)
        else:
                answer += int(N[len_N - i - 1])* (B**i)
print(answer)
