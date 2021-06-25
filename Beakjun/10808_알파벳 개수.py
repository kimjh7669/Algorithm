import sys

s = input()
answer = [0] * 26

# print(ord('a'))
for i in s:
        answer[ord(i) - 97] += 1
answer_str = ''
for i in answer:
        answer_str = answer_str + str(i) + ' '
print(answer_str[: -1])
        
