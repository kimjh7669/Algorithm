from itertools import permutations

def solution(k, dungeons):
    answer = 0
    N = len(dungeons)
    permu = permutations(range(len(dungeons)))
    
    for per in permu:
        cur_tired = k
        count = 0
        for i in per:
            limit, consume = dungeons[i]
            
            if cur_tired >= limit:
                cur_tired = cur_tired - consume
                count += 1
        if answer < count:
            answer = count
    
    return answer
