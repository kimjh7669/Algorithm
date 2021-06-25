import sys
from collections import deque
import copy
sys.setrecursionlimit(10 ** 6)
input = sys.stdin.readline

N = int(input())
graph = []
for i in range(N):
        graph.append(list(map(int, sys.stdin.readline().strip().split(' '))))
visited = [[0] * N for _ in range(N)]
q = deque()

dx = [-1,0,0,1]
dy = [0,-1,1,0]

cnt = 0

for i in range(N):
        for j in range(N):
                if graph[i][j] == 1 and visited[i][j] == 0:
                        cnt += 1
                        visited[i][j] = cnt
                        q.append([i,j])
                        while q:
                                a, b = q.popleft()
                                for k in range(4):
                                        x = a + dx[k]
                                        y = b + dy[k]
                                        if 0 <= x <N and 0<= y < N and graph[x][y] == 1 and visited[x][y] == 0:
                                                visited[x][y] = cnt
                                                q.append([x,y])

answer = 3 * N

for k in range(cnt):
        bridge = [[0] * N for _ in range(N)]
        q2 = deque()
        for i in range(N):
                for j in range(N):
                        if visited[i][j] == k + 1:
                                q2.append([i,j])            
                                bridge[i][j] = 1
        again = True
        while q2:
                x, y = q2.popleft()
                for i in range(4):
                        nx = x + dx[i]
                        ny = y + dy[i]
                        
                        if 0 <= nx < N and 0 <= ny < N:
                                if graph[nx][ny] == 0 and bridge[nx][ny] == 0 :
                                        bridge[nx][ny] = bridge[x][y] + 1
                                        q2.append([nx, ny])
                                elif visited[nx][ny] != 0 and visited[nx][ny] != (k + 1):
                                        answer = min(bridge[x][y], answer)
                                        again = False
                                        break
                if again == False:
                        break


                        
print(answer - 1)
