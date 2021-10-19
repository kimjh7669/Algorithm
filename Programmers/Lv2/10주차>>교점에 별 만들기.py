def solution(line):
    num_line = len(line)
    INF = float('inf')
    
    spot = []
    min_x = INF
    max_x = -INF
    min_y = INF
    max_y = -INF
    for i in range(num_line):
        for j in range(i, num_line):
            A, B, E = line[i]
            C, D, F = line[j]
            mo = A*D-B*C
            if mo == 0:
                continue
            x = (B*F-E*D)/(mo)
            y = (E*C-A*F)/(mo)
            if x-int(x) or y-int(y) : continue
            x, y = int(x), int(y)
            min_x, max_x, min_y, max_y = min(min_x, x), max(max_x, x), min(min_y, y), max(max_y, y)
            spot.append((x, y))

    res = [['.' for _ in range(max_x - min_x + 1)] for _ in range(max_y - min_y + 1)]
    for i,j in spot:
        res[max_y-j][i-min_x] = '*'
    
    return [''.join(s) for s in res]
