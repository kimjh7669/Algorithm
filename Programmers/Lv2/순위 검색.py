# info_list = [[[[[] for k in range(2)] for j in range(2)] for i in range(2)] for _ in range(3)]
info_list = [[] for _ in range(24)]

def solution(info, query):
    answer = []
    for i in info:
        temp = i.split(' ')
        tmp = 0
        if temp[0] == "cpp":
            tmp = 0
        elif temp[0] == "java":
            tmp = 8
        elif temp[0] == "python":
            tmp = 16
        
        if temp[1] == "frontend":
            tmp += 4
        elif temp[1] == "backend":
            pass
        
        if temp[2] == "junior":
            pass
        elif temp[2] == "senior":
            tmp += 2
        
        if temp[3] == "chiken":
            pass
        elif temp[3] == "pizza":
            tmp += 1
        info_list[tmp].append(temp[4])
        
    for i in info_list:
        i.sort()
    # print(info_list)
    
    
    idx = -1
    for i in query:
        answer.append(0)
        idx += 1
        temp = i.split(' ')
        temp.remove('and')
        temp.remove('and')
        temp.remove('and')
        tmp = [0]
        if temp[0] == "cpp":
            tmp[0] = 0
        elif temp[0] == "java":
            tmp[0] = 8
        elif temp[0] == "python":
            tmp[0] = 16
        elif temp[0] == "-":
            tmp.append(8)
            tmp.append(16)
            
        if temp[1] == "frontend":
            for j in range(len(tmp)):
                tmp[j] += 4
        elif temp[1] == "backend":
            pass
        elif temp[1] == "-":
            for j in range(len(tmp)):
                tmp.append(tmp[j] + 4)
        
                
        
        if temp[2] == "junior":
            pass
        elif temp[2] == "senior":
            for j in range(len(tmp)):
                tmp[j] += 2
        elif temp[2] == "-":
            for j in range(len(tmp)):
                tmp.append(tmp[j] + 2)
        
        if temp[3] == "chiken":
            pass
        elif temp[3] == "pizza":
            for j in range(len(tmp)):
                tmp[j] += 1
        elif temp[3] == "-":
            for j in range(len(tmp)):
                tmp.append(tmp[j] + 1)
        
        for j in tmp:
            for k in info_list[j]:
                if int(k) >= int(temp[4]):
                    answer[idx] += 1
        # print(answer[idx])
        tmp.sort()
        # print(tmp)
        # print(temp)
        
    return answer
