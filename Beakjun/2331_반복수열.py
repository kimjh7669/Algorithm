import sys
from collections import deque
D1, P = map(int, input().split(' '))
arr = deque()
arr.append(D1)

if_end = False

while if_end == False:
        num_str = str(arr[0])
        append_num = 0
        for i in num_str:
                append_num += int(i) ** P
        if arr.count(append_num) != 0:
                if_end =True
                break
        arr.appendleft(append_num)

idx = arr.index(append_num)
print(len(arr) - idx -1)
