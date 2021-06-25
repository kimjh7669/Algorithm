import sys

s = input()
answer = [-1] * 26

# print(ord('a'))
for i in range(len(s)):
        if answer[ord(s[i]) - 97] == -1:
                answer[ord(s[i]) - 97] = i
answer_str = ''
for i in answer:
        answer_str = answer_str + str(i) + ' '
print(answer_str[: -1])
        
