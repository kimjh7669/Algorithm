import sys
 
N = int(input())
answer = ""
if N == 0:
    print(0)

while N != 0:
        if N < 0:
                mog = N // 2
                if N == 2 * mog:
                        answer =  "0" + answer
                        N = -mog

                elif N == 2 * mog + 1:
                        answer = "1" + answer
                        N = -mog

        elif N > 0:
                mog = N // 2
                if N == 2 * mog:
                        answer =  "0" + answer
                        N = - mog

                elif N == 2 * mog + 1:
                        answer = "1" + answer
                        N = - mog
print(answer)
