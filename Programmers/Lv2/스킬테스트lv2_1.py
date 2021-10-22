
def solution(prior, location):
    answer = 0
    dic = {}
    lst = []
    level = [0 for _ in range(10)]
    for i in range(len(prior)):
        dic[i] = prior[i]
        lst.append(i)
        level[prior[i]] += 1
    
    num = 0
    while len(lst) != 0:
        cur_num = lst.pop(0)    
        cur_prior = dic[cur_num]
        if_append = False
        for i in range(cur_prior+1, 10, 1):            
            if level[i] != 0:
                lst.append(cur_num)
                if_append = True
                break
        if if_append == False:
            num += 1
            level[dic[cur_num]] -= 1
            if cur_num == location:
                return num

    return answer
