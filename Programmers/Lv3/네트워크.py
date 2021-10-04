visited = [0 for _ in range(201)]

def dfs(idx, graph):
    if visited[idx] == 1:
        return 0
    visited[idx] = 1
    for i in graph[idx]:
        dfs(i, graph)
    return 0

def solution(n, computers):
    answer = 0
    graph = []
    for i in range(len(computers)):
        graph.append([])
        for j in range(len(computers[i])):
            if i == j:
                continue
            if computers[i][j] == 1:
                graph[i].append(j)
    for i in range(len(graph)):
        if visited[i] == 0:
            answer += 1
            dfs(i, graph)
    return answer
