import sys
N, B = map(int, input().split(' '))
answer = ""
while N:
        Rem = N % B
        N = N // B

        if Rem < 10:
                answer = str(Rem) + answer
        else:
                answer = chr(Rem + 55) + answer
print(answer)
