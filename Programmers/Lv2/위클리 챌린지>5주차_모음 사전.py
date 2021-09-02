def convert(i):
    return_chr = ''
    if i == 0:
        return_chr = ''
    if i == 1:
        return_chr = 'A'
    if i == 2:
        return_chr = 'E'
    if i == 3:
        return_chr = 'I'
    if i == 4:
        return_chr = 'O'
    if i == 5:
        return_chr = 'U'
    return return_chr
        

def solution(word):
    answer = 0
    lst = []
    for i in range(6):
        for j in range(6):
            for k in range(6):
                for l in range(6):
                    for m in range(6):
                        char1 = convert(i)
                        char2 = convert(j)
                        char3 = convert(k)
                        char4 = convert(l)
                        char5 = convert(m)
                        list_to_str = char1+char2+char3+char4+char5
                        lst.append(list_to_str)
    lst.sort()
    new_list = []
    for v in lst:
        if v not in new_list:
            new_list.append(v)
    
    answer = new_list.index(word)
    return answer
