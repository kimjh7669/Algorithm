import sys

first_num = int(input())
second_num = input()
b = [0, 0, 0]
for i in range(len(second_num)-1, -1, -1):
    b[i] = first_num * int(second_num[i])
    print(b[i])
    # print(second_num[i])
print(b[0] * 100 + b[1] * 10 + b[2])
