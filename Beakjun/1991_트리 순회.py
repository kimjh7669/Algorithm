import sys
from collections import deque

N = int(input())

graph = []

for i in range(N):
        graph.append(list(sys.stdin.readline().strip().split(' ')))

# 전위 순회한 결과
# [0][1][2] 순서로 queue에 넣는다.

queue = []
visit = [0] * N
visit[0] = 1

queue.append(graph[0][2])
queue.append(graph[0][1])
queue.append(graph[0][0])

answer = ""
while queue:
        a = queue.pop()
        answer = answer + a
        num = ord(a) - 65
        if visit[num] == 0:
                for i in range(2):
                        if graph[num][i+1] != '.':
                                queue.append(graph[num][i+1])                                        
                visit[num] = 1
print(answer)



# 중위 순회한 결과
# [1][0][2] 순서로 stack에 넣는다.

queue = deque()
visit = [0] * N
visit[0] = 1

queue.append(graph[0][2])
queue.append(graph[0][0])
queue.append(graph[0][1])

answer = ""
while queue:
        a = queue.pop()
        # answer = answer + a
        num = ord(a) - 65
        if visit[num] == 0:
                queue.append(a)
                if graph[num][2] != '.':
                        queue.appendleft(graph[num][2])
                if graph[num][1] != '.':
                        queue.append(graph[num][1])
                visit[num] = 1
        else:
                answer = answer + a
print(answer)


# 후위 순회한 결과
# [2][1][0] 순서로 stack에 넣는다.
# print(graph)

queue = deque()
visit = [0] * N
visit[0] = 1

queue.append(graph[0][0])
queue.append(graph[0][2])
queue.append(graph[0][1])

answer = ""
while queue:
        a = queue.pop()
        num = ord(a) - 65
        if visit[num] == 0:
                queue.append(a)
                if graph[num][2] != '.':
                        queue.append(graph[num][2])
                if graph[num][1] != '.':
                        queue.append(graph[num][1])
                visit[num] = 1
        else:
                answer = answer + a
print(answer)
