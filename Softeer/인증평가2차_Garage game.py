import sys
from copy import deepcopy

N = int(input())

def let_down(arr_hi):
    arr = deepcopy(arr_hi)
    global N
    for i in range(2*N, 3*N):
        for j in range(N):
            if arr[i][j] == 0:
                for k in range(i, 0, -1):
                    arr[k][j] = arr[k-1][j]
                    arr[k-1][j] = 0
    return arr

size = 0

def bfs2(arr, dx, dy, nx, ny, value):
    global N
    global size
    size += 1
    if nx < square[0]:
        square[0] = nx
    if ny < square[1]:
        square[1] = ny
    if nx > square[2]:
        square[2] = nx
    if ny > square[3]:
        square[3] = ny

    arr[nx][ny] = 0
    for i in range(4):
        new_x = nx + dx[i]
        new_y = ny + dy[i]
        # print(new_x, new_y)
        if new_x >= 2*N and new_y >= 0 and new_x < 3*N and new_y < N:
            if arr[new_x][new_y] == value:
                bfs2(arr, dx, dy, new_x, new_y, value)
    return arr

input_arr = []
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
for i in range(3*N):
    input_arr.append(list(map(int, input().split(' '))))


visited = [[0] * N for _ in range(N)]
answer = 0

for i in range(2*N, 3*N):
    for j in range(N):
        size = 0
        arr1 = deepcopy(input_arr)
        square = [i, j, i, j]
        arr2_real = bfs2(arr1, dx, dy, i, j, arr1[i][j])
        square_size = (1 + square[2] - square[0]) * (1 + square[3] - square[1])

        score1 = size + square_size
        for k in range(2*N, 3*N):
            for l in range(N):
                size = 0
                arr2 = let_down(arr2_real)
                square = [k,l,k,l]
                arr3_real = bfs2(arr2, dx, dy, k, l, arr2[k][l])
                square_size = (1 + square[2] - square[0]) * (1 + square[3] - square[1])
                score2 = size + square_size
                for m in range(2*N, 3*N):
                    for n in range(N):
                        size = 0
                        arr3 = let_down(arr3_real)
                        square = [m,n,m,n]
                        arr4 = bfs2(arr3, dx, dy, m, n, arr3[m][n])
                        square_size = (1 + square[2] - square[0]) * (1 + square[3] - square[1])
                        score3 = size + square_size
                        if score1 + score2 + score3 > answer:
                            answer = score1 + score2 + score3

print(answer)
