def solution(sizes):
    answer = 0
    x_x = 0
    y_y = 0
    new = []
    for i in sizes:
        i.sort()
        new.append(i)
    for x,y in new:
        if x_x < x:
            x_x = x
        if y_y < y:
            y_y = y
    answer = x_x * y_y
    return answer
