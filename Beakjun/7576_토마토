import sys
from collections import deque
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
max_num = 0
cnt_0 = 0

N, M = map(int, input().split(' '))
graph = []
queue = deque()
visit = [[0] * N for _ in range(M)]


for i in range(M):
        lst = list(map(int, sys.stdin.readline().strip().split(' ')))
        cnt_0 += lst.count(0)
        graph.append(lst)

for i in range(M):
        for j in range(N):
                if graph[i][j] == 1:
                        queue.append((i, j, 0))
                        visit[i][j] = 1
                if graph[i][j] == -1:
                        visit[i][j] = 1

while queue:
        y, x, cur_day = queue.popleft()
        for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if nx < 0 or ny < 0 or nx == N or ny == M:
                        continue
                if visit[ny][nx] == 0:
                        visit[ny][nx] = 1
                        
                        max_num = max(max_num, cur_day + 1)
                        cnt_0 -= 1
                        queue.append((ny, nx, cur_day + 1))



if cnt_0 != 0:
        print(-1)
else:
        print(max_num)
