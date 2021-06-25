import sys
from collections import deque
sys.setrecursionlimit(10 ** 6)
input = sys.stdin.readline

w, h = map(int, input().split())

dx = [-1, -1, -1, 0, 0, 1, 1, 1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

def dfs(i, j):
        graph[i][j] = 0
        
        for k in range(8):
                x = i + dx[k]
                y = j + dy[k]
                if 0 <= x < h and 0 <= y < w and graph[x][y] == 1:
                        dfs(x,y)
                        


while w!=0 and h!=0:
       
        graph = []
        for i in range(h):
                graph.append(list(map(int, input().split())))
        count = 0
        for i in range(h):
                for j in range(w):
                        if graph[i][j] == 1:
                                dfs(i, j)
                                count += 1
        print(count)
        w, h = map(int, input().split())
        
        
        
        
        
        
# import sys
# from collections import deque

# w, h = map(int, input().split())

# dx = [-1, -1, -1, 0, 0, 1, 1, 1]
# dy = [-1, 0, 1, -1, 1, -1, 0, 1]

# def bfs(i, j):
#         q = deque()
#         q.append([i,j])
#         graph[i][j] = 0
#         while q:
#                 a, b = q.popleft()
#                 for k in range(8):
#                         x = a + dx[k]
#                         y = b + dy[k]
#                         if 0 <= x < h and 0 <= y < w and graph[x][y] == 1:
#                                 graph[x][y] = 0
#                                 q.append([x, y])
                                
                                

                        


# while w!=0 and h!=0:
       
#         graph = []
#         for i in range(h):
#                 graph.append(list(map(int, input().split())))
#         count = 0
#         for i in range(h):
#                 for j in range(w):
#                         if graph[i][j] == 1:
#                                 bfs(i, j)
#                                 count += 1
#         print(count)
#         w, h = map(int, input().split())
