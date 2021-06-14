import sys
from collections import deque
N, M, V = map(int, input().split(' '))
graph_temp = []
dfs_visit = [0] * N
bfs_visit = [0]*N
dfs_list = []
bfs_list = []

graph = []

for i in range(M):
        graph_temp.append(list(map(int, sys.stdin.readline().split(' '))))
for i in range(N):
        graph.append([])

for i in graph_temp:
        graph[i[0] - 1].append(i[1])
        graph[i[1] - 1].append(i[0])

for i in range(N):
        graph[i].sort()


def dfs(graph, visit, V):
        if visit[V - 1] == 0:
                visit[V - 1] = 1
                dfs_list.append(V)
                for i in graph[V-1]:
                        dfs(graph, visit, i)


def bfs(graph, visit, V):
        bfs_temp = deque()
        visit[V-1] = 1
        bfs_list.append(V)
        bfs_temp.append(graph[V-1])
        while len(bfs_temp) != 0:
                i = bfs_temp.popleft()
                for a in i:
                        if visit[a - 1] == 0:
                                visit[a-1] = 1
                                bfs_list.append(a)
                                bfs_temp.append(graph[a-1])

dfs(graph, dfs_visit, V)
bfs(graph, bfs_visit, V)
print(" ".join(map(str,dfs_list)))
print(" ".join(map(str,bfs_list)))
