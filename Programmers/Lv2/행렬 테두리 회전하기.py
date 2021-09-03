def rotate(query, matrix, max_num):
    x1 = query[0] - 1
    y1 = query[1] - 1
    x2 = query[2] - 1
    y2 = query[3] - 1
    min_num = max_num
    temp = 0
    
    for i in range(y2-y1):
        idx = y2-y1 - i - 1
        if i == 0:
            temp = matrix[x1][y1 + idx + 1]
        matrix[x1][y1 + idx + 1] = matrix[x1][y1 + idx]
        if matrix[x1][y1+idx+1] < min_num:
            min_num = matrix[x1][y1+idx+1]
    
    
    for i in range(x2-x1):
        idx = x2-x1 - i - 1
        if i == 0:
            temp1 = matrix[x1 + idx + 1][y2]
        matrix[x1 + idx + 1][y2] = matrix[x1 + idx][y2]
        if idx == 0:
            matrix[x1 + idx + 1][y2] = temp
        if matrix[x1 + idx+1][y2] < min_num:
            min_num = matrix[x1 + idx + 1][y2]
     
    for i in range(y2-y1):
        idx = i        
        if i == 0:
            temp2 = matrix[x2][y1 + idx]
        matrix[x2][y1 + idx] = matrix[x2][y1 + idx + 1]
        if idx == y2 - y1 - 1:
            matrix[x2][y1 + idx] = temp1
        if matrix[x2][y1+idx] < min_num:
            min_num = matrix[x2][y1+idx]
            
    for i in range(x2-x1):
        idx = i        
        if i == 0:
            temp3 = matrix[x1+idx+1][y1]
        matrix[x1 + idx][y1] = matrix[x1 +idx + 1][y1]
        if idx == x2 - x1 - 1:
            matrix[x1 + idx][y1] = temp2
        if matrix[x1+idx][y1] < min_num:
            min_num = matrix[x1+idx][y1]
    
    
    return min_num



def solution(rows, columns, queries):
    answer = []
    matrix = []
    max_num = rows * columns + 1
    
    for i in range(rows):
        temp = []
        for j in range(1, columns + 1):
            temp.append(columns * i + j)
        matrix.append(temp)
    
    for query in queries:
        min_num = rotate(query, matrix, max_num)
        answer.append(min_num)
    return answer
