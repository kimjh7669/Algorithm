import sys
T = int(input())
for i in range(T):
        N = int(sys.stdin.readline().strip())
        graph = list(map(int, sys.stdin.readline().strip().split(' ')))
        
        for j in range(len(graph)):
                graph[j] = graph[j] - 1
        fail = 0
        idx = 0
        visit = [0]*N

        for j in range(N):
                if_already = False
                if visit[j] == 0:
                        visit[j] = 1
                        
                        temp = [j]
                        now_person = j
                        
                        
                        
                        while True:
                                next_person = graph[now_person]
                                if visit[next_person] == 1:
                                        try:
                                                idx = temp.index(next_person)
                                        except:
                                                fail += len(temp)
                                                if_already = True
                                        break
                                now_person = next_person
                                visit[now_person] = 1
                                temp.append(now_person)
                        if if_already == False:
                                fail += idx
        print(fail)
