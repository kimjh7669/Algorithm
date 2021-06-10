import sys
from collections import deque

N = int(input())
q = deque()

for i in range(N):
        a = sys.stdin.readline().strip('\n')

        if a.find("push") != -1:
                _, num = a.split(' ')
                num = int(num)
                q.append(num)
        else:
                if a == "front":
                        if len(q) == 0:
                                print(-1)
                        else:
                                print(q[0])
                if a == "back":
                        if len(q) == 0:
                                print(-1)
                        else:
                                print(q[len(q)-1])
                elif a == "pop":
                        if len(q) == 0:
                                print(-1)
                        else:
                                print(q.popleft())
                elif a == "size":
                        print(len(q))
                elif a == "empty":
                        if len(q) == 0:
                                print(1)
                        else:
                                print(0)
