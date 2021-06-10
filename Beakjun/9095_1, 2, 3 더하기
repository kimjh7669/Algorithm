import sys

# 7
# 44
# 274

N = int(input())
a = []
for iter in range(N):
        a.append(int(input()))

for i in a:
        temp1 = 1
        temp2 = 2
        temp3 = 3
        sum = 4
        if i == 1:
                print(1)
                continue
        elif i == 2:
                print(2)
                continue
        elif i == 3:
                print(4)
                continue
        for j in range(i - 3):
                sum = sum + temp3
                tmp = temp1
                temp1 = temp2
                temp2 = temp3
                temp3 = tmp + temp1 + temp2
        print(sum)
