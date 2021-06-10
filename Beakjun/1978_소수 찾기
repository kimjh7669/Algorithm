import sys
N = int(input())
lst = list(map(int, input().split(' ')))
count = 0

for num in lst:
        if_sosu = False
        if num == 2:
                if_sosu = True
        for i in range(2, num):
                if_sosu = True
                if num % i == 0:
                        if_sosu = False
                        break
        if if_sosu == True:
                count += 1
print(count)
