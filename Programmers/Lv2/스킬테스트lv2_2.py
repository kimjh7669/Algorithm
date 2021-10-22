def solution(clothes):
    answer = 0
    lst = []
    dic = {}
    for i in range(len(clothes)):
        if clothes[i][1] in lst:
            dic[clothes[i][1]] += 1
        else:
            lst.append(clothes[i][1])
            dic[clothes[i][1]] = 1
    answer = 1
    for i in dic:
        answer *= dic[i] + 1
    answer -=1
    return answer
