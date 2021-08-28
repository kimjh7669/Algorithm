import sys
from copy import deepcopy

N, K = map(int, input().split(' '))
arr_K = [[] for _ in range(K)]
input_arr = []
for i in range(N):

    x, y, color = map(int, input().split(' '))
    input_arr.append([x, y])
    arr_K[color-1].append([x, y])
    # arr_K[input_arr[i][2] - 1] += 1

def check_in(k, square):
    possess = False
    for i in range(len(arr_K[k])):
        if arr_K[k][i][0] >= square[0] and arr_K[k][i][0] <= square[2] and arr_K[k][i][1] >= square[1] and arr_K[k][i][1] <= square[3]:
            possess = True
    return possess




answer = 4000001
arr_possess = [False] * K
for i in range(N):
    for j in range(i + 1, N):
        all_possess = True
        small_x = min(input_arr[i][0], input_arr[j][0])
        big_x = max(input_arr[i][0], input_arr[j][0])
        small_y = min(input_arr[i][1], input_arr[j][1])
        big_y = max(input_arr[i][1], input_arr[j][1])
        square = [small_x, small_y, big_x, big_y]
        for k in range(K):
            temp = check_in(k, square)
            if temp == False:
                all_possess = False

        if all_possess == True:
            square_size = (square[2] - square[0]) * (square[3] - square[1])
            if answer > square_size:
                answer = square_size
        




if answer == 4000001:
    answer = 0
print(answer)
