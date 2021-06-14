import sys
N, M = map(int, input().split(' '))

visit = [0]*N
graph_temp = []
graph = []
stack = []

for i in range(M):
        graph_temp.append(list(map(int, sys.stdin.readline().split(' '))))
# print(graph_temp)
for i in range(N):
        graph.append([])
for i in range(len(graph_temp)):
        graph[graph_temp[i][0] - 1].append(graph_temp[i][1])
        graph[graph_temp[i][1] - 1].append(graph_temp[i][0])


answer= []

def dfs(graph, visit, i):
        if visit[i-1] == 0:
                answer.append(i)
                visit[i-1] = 1
                for j in graph[i-1]:
                        if visit[j-1] == 0:
                                stack.append(j)
                while len(stack) != 0:
                        a = stack.pop()
                        if visit[a-1] == 0:
                                visit[a-1] = 1
                                for j in graph[a-1]:
                                        if visit[j-1]==0:
                                                stack.append(j)

        
for i in range(N):
        dfs(graph, visit, i+1)
print(len(answer))
