import sys
from collections import deque
N = int(input())
graph = [[] for _ in range(N+1)]
sum2child = [[] for _ in range(N + 1)]
visited = [0] * (N + 1)
maxcost = [0] * (N + 1)
cango = [0] * (N + 1)
q = deque()

for i in range(N):
        temp_list = list(map(int, sys.stdin.readline().strip().split(' ')))
        temp_num = (len(temp_list)) // 2 - 1
        cango[temp_list[0]] = temp_num
        if temp_num == 1:
                q.append(temp_list[0])
        for j in range(1, temp_num + 1):
                graph[temp_list[0]].append([temp_list[2*j-1], temp_list[2*j]])
while q:
        num = q.popleft()
        if cango[num] == 1 and visited[num] == 0:
                visited[num] = 1
                for i in range(len(graph[num])):
                        idx = graph[num][i][0]
                        q.append(idx)
                        if visited[idx] == 0:
                                sum2child[idx].append(maxcost[num]+ graph[num][i][1])
                                maxcost[idx] = max(maxcost[idx], maxcost[num]+ graph[num][i][1])
                                if cango[idx] > 1:
                                        cango[idx] -= 1
                                
        elif cango[num] != 1 and visited[num] == 0:
                q.append(num)

temp = [0]
for i in range(1, N+1):
        sum2child[i].sort(reverse = True)
        if len(sum2child[i])>1:
                temp.append(sum2child[i][0]+ sum2child[i][1])
        elif len(sum2child[i]) == 1:
                temp.append(sum2child[i][0])
print(max(temp))
