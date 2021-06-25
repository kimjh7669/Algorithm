import sys
a = input()
answer = 0
layer = 1
for i in range(1,len(a)):
        if a[i] == "(":
                layer += 1
        else:
                layer -= 1
                if a[i-1] == "(" and a[i] ==")":
                        answer += layer
                else:
                        answer += 1
print(answer)
