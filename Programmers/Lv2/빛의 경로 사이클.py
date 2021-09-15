visited = [[[0 for j in range(4)]for _ in range(501)] for i in range(501)]


def solution(grid):
    answer = []
    x_len = len(grid[0])
    y_len = len(grid)
    for i in range(y_len):
        for j in range(x_len):
            for init_dir in range(4): # 0 - down, 1 - left, 2 - up, 3 - right
                cur_dir = init_dir
                cur_i = i
                cur_j = j
                
                step = 1
                while True: # 언제 끝날 것인가.
                    # 한스텝 전진
                    if visited[cur_i][cur_j][cur_dir] != 0:
                        break
                    visited[cur_i][cur_j][cur_dir] = step
                    step += 1
                    if cur_dir == 0:
                        cur_i += 1
                    elif cur_dir == 1:
                        cur_j -= 1
                    elif cur_dir == 2:
                        cur_i -= 1
                    elif cur_dir == 3:
                        cur_j += 1
                    
                    # 전진했는데 범위를 벗어났을 경우
                    if cur_i < 0:
                        cur_i = y_len-1
                    elif cur_i > y_len-1:
                        cur_i = 0
                    if cur_j < 0:
                        cur_j = x_len-1
                    elif cur_j > x_len-1:
                        cur_j = 0                    
                    
                    
                    if cur_dir == 0:
                        if grid[cur_i][cur_j] == 'L':
                            cur_dir = 3
                        elif grid[cur_i][cur_j] == 'R':
                            cur_dir = 1
                            
                    elif cur_dir == 1:
                        if grid[cur_i][cur_j] == 'L':
                            cur_dir = 0
                        elif grid[cur_i][cur_j] == 'R':
                            cur_dir = 2
                    elif cur_dir == 2:
                        if grid[cur_i][cur_j] == 'L':
                            cur_dir = 1
                        elif grid[cur_i][cur_j] == 'R':
                            cur_dir = 3
                    elif cur_dir == 3:
                        if grid[cur_i][cur_j] == 'L':
                            cur_dir = 2
                        elif grid[cur_i][cur_j] == 'R':
                            cur_dir = 0
                    
                    if visited[cur_i][cur_j][cur_dir] != 0:
                        if visited[cur_i][cur_j][cur_dir] == 1:
                            answer.append(step - 1)
                        break
                
    answer.sort()                
    return answer
