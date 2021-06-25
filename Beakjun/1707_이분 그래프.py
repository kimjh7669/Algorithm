import sys
sys.setrecursionlimit(10 ** 6)
input = sys.stdin.readline

def dfs(num, group):
        visited[num] = group
        for i in graph[num]:
                if visited[i] == 0:
                        answer = dfs(i, -group)
                        if answer == "NO":
                                return answer
                elif visited[i] == visited[num]:
                        return "NO"
        return "YES"


for _ in range(int(input())):
        V, E = map(int, input().split(' '))
        graph = [[] for _ in range(V + 1)]

        for i in range(E):
                A, B = map(int, input().split(' '))
                graph[A].append(B)
                graph[B].append(A)
        
        answer = "YES"
        visited = [0] * (V + 1)
        for i in range(1, V + 1):
                if visited[i] == 0:
                        answer = dfs(i, 1)
                        if answer == "NO":
                                break
        print(answer)
