def solution(weights, head2head):
    info = []
    w = len(weights)
    for p in range(w):
        high = [i for i in range(w) if weights[i]>weights[p]]
        over = len([info for info in high if head2head[p][info]=="W"])
        rate = 0 if not (w-head2head[p].count("N")) else head2head[p].count("W")/(w-head2head[p].count("N"))
        info.append((p, weights[p], rate, over))
    info = sorted(info, key=lambda x: (x[2], x[3], x[1], -x[0]), reverse=True)
    return [num[0]+1 for num in info]
