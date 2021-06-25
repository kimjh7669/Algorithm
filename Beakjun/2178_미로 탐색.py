import sys
from collections import deque
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
max_num = 0
cnt_0 = 0

N, M = map(int, input().split(' '))
graph = []
queue = deque()
visit = [[0] * M for _ in range(N)]


for i in range(N):
        lst = list(map(int, sys.stdin.readline().strip()))
        graph.append(lst)

queue.append((0, 0))
while queue:
        y, x = queue.popleft()
        for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]
                if nx < 0 or ny < 0 or nx == N or ny == M:
                        continue
                if graph[nx][ny] == 1:
                        graph[nx][ny] = graph[x][y] + 1
                        queue.append((ny, nx))


print(graph[N-1][M-1])
