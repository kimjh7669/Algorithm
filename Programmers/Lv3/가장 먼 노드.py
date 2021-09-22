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
