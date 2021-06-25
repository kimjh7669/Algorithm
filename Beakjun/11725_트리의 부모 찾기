import sys
from collections import deque

N = int(input())
graph = [[] for _ in range(N)]
for i in range(N-1):
        A, B = map(int, input().split())
        graph[A - 1].append(B)
        graph[B-1].append(A)

q = deque()
visited = [0]*(N+1)
visited[1] = -1
for i in range(len(graph[0])):
        a = graph[0][i]
        q.append(a)
        visited[a] = 1

while q:
        a  = q.popleft()

        for i in range(len(graph[a-1])):
                if visited[graph[a-1][i]] == 0:
                        visited[graph[a-1][i]] = a
                        q.append(graph[a-1][i])
for i in range(N-1):
        print(visited[i + 2])
