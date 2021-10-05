def dfs(visited, graph, i, num):
    if visited[i] == 1:
        return num
    visited[i] = 1
    num += 1
    for idx in graph[i]:
        num = dfs(visited, graph, idx, num)
    return num
    
    
def solution(n, wires):
    answer = n
    
    for i in wires:
        tmp_wires = wires.copy()
        tmp_wires.remove(i)
        graph = [[] for _ in range(201)]
        for i, j in tmp_wires:
            graph[i].append(j)
            graph[j].append(i)
        
        visited = [0 for _ in range(201)]
        num = []
        for k in range(1, n+1):
            if graph[k] == 0:
                continue
            a = dfs(visited, graph, k, 0)
            if a != 0:
                num.append(a)
        if len(num) == 2:
            temp = abs(num[0] - num[1])   
        
            if answer == -1 or temp < answer:
                answer = temp
    return answer
