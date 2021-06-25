import sys

S = input()
answer = []
for i in range(len(S)):
        answer.append(S[i:])
answer1 = sorted(answer)
for i in answer1:
        print(i)
