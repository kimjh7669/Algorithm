import sys
N = int(input())
for_break = N
graph = []
visit = [1] * N
parent_graph = []
child_graph= []
temp = []
sum2leaves = [0] * N
maxleaf = [0] * N

for i in range(N):
        child_graph.append([])
        parent_graph.append([])
        temp.append([])

for i in range(N - 1):
        graph.append(list(map(int, sys.stdin.readline().strip().split(' '))))
        parent_graph[graph[i][0] - 1].append(graph[i][1])
        child_graph[graph[i][1] - 1].append(graph[i][0])
        child_graph[graph[i][1] - 1].append(graph[i][2])

        visit[graph[i][0] - 1] = 0
for_break = visit.count(0)

while for_break != 0:
        i = visit.index(1)
        visit[i] = 2
        
        idx = child_graph[i][0]- 1
        temp[idx].append(maxleaf[i] + child_graph[i][1])
        parent_graph[idx].pop(0)
        if len(parent_graph[idx]) == 0:
                visit[idx] = 1
                for_break -= 1
                sort_temp = sorted(temp[idx], reverse = True)
                maxleaf[idx] = sort_temp[0]
                if len(sort_temp) > 1:
                        sum2leaves[idx] = sort_temp[0] + sort_temp[1]
                else:
                        sum2leaves[idx] = sort_temp[0]
                        

print(max(sum2leaves))
