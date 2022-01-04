from collections import deque

def bfs(num, adj, visited):
    count = 0
    q = deque([[num, count]])
    while len(q) != 0:
        val = q.popleft()
        v = val[0]
        count = val[1]
        if visited[v] == -1:
            visited[v] = count 
            count = count + 1
            for idx in adj[v]:
                q.append([idx, count])
        
        
def solution(n, edge):
    answer = 0
    visited = [-1 for _ in range(n+1)]
    adj = [[] for _ in range(n+1)]
    
    for i in edge:
        x = i[0]
        y = i[1]
        adj[x].append(y)
        adj[y].append(x)
    bfs(1,adj,visited)
    
    visited.sort(reverse=True)
    answer = visited.count(visited[0])

    return answer

## second solution
# def solution(n, edge):
#     answer = 0
#     graphs = [[] for _ in range(n+1)]
#     visited = [-1 for _ in range(n+1)]
#     visited[1] = 0
#     queue = []
    
#     max_num = 1
#     for i, j in edge:
#         graphs[i].append(j)
#         graphs[j].append(i)

#     for i in graphs[1]:
#         queue.append(i)
#         visited[i] = visited[1] + 1
    
#     while True:
#         cur_num = queue.pop(0)
#         for i in graphs[cur_num]:
#             if visited[i] == -1:
#                 queue.append(i)
#                 visited[i] = visited[cur_num] + 1
#                 if visited[i] > max_num:
#                     max_num = visited[i]
#         if len(queue) == 0:
#             break    
#     for i in visited:
#         if i == max_num:
#             answer+=1
#     return answer
