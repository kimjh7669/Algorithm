visited = [[0 for _ in range(500)] for i in range(500)]
def solution(triangle):
    answer = 0
    for i in range(len(triangle)):
        for j in range(len(triangle[i])):
            if i == 0 and j == 0:
                visited[i][j] = triangle[i][j]
            elif j == 0:
                visited[i][j] = visited[i-1][j] + triangle[i][j]
            elif j == i:
                visited[i][j] = visited[i-1][j-1] + triangle[i][j]
            else:
                visited[i][j] = max(visited[i-1][j-1], visited[i-1][j]) + triangle[i][j]
    
    for i in range(len(triangle)):
        for j in range(len(triangle[i])):
            if answer < visited[i][j]:
                answer = visited[i][j]
    
    return answer
