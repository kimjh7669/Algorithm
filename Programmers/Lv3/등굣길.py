def solution(m, n, puddles):
    answer = [m*n, 0]
    cur_num = [[0 for _ in range(n)] for __ in range(m)]
    for i in range(m):
        for j in range(n):
            if [i+1,j+1] in puddles:
                cur_num[i][j] = 0
                continue
            if i == 0 and j == 0:
                cur_num[i][j] = 1
            elif i == 0 and j != 0:
                cur_num[i][j] = cur_num[i][j-1]
            elif i != 0 and j == 0:
                cur_num[i][j] = cur_num[i-1][j]
            else:
                cur_num[i][j] = cur_num[i][j-1] + cur_num[i-1][j]
    # print(cur_num)
    return cur_num[m-1][n-1] % 1000000007
