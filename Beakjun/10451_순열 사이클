import sys
T = int(input())

def dfs(graph, visit, i):
        visit[i-1] = 1
        dfs_temp = []
        dfs_temp.append(graph[i-1])
        while len(dfs_temp) != 0:
                idx = dfs_temp.pop()
                if visit[idx-1] == 0:
                        dfs_temp.append(graph[idx-1])
                visit[idx-1] = 1



for i in range(T):
        N = int(sys.stdin.readline())

        graph = list(map(int, sys.stdin.readline().strip().split(' ')))
        visit = [0] * N
        answer = 0
        for i in range(N):
                if visit[i] == 0:
                        dfs(graph, visit, i+1)
                        answer +=1
        print(answer)

