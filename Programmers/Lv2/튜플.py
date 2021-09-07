def solution(s):
    answer = []
    x = s.split('}')
    temp = {}
    for i in x:
        y = i.strip('{')
        y = y.strip(',')
        y = y.strip('{')
        z = y.split(',')
        if '' in z:
            pass
        else:
            temp[len(z)] = z
    dictionary_items = temp.items()
    sorted_items = sorted(dictionary_items)
    for i in sorted_items:
        for j in i[1]:
            if int(j) not in answer:
                answer.append(int(j))
    return answer
