def solution(n, k):
    answer = []
    
    num_list = []
    temp_num = k
    factorial_num = 1
    cur_num = n - 1
    for i in range(n):
        num_list.append(i + 1)
        if i == 0:
            continue
        factorial_num *= i
    a = 0 
    while len(answer) != n:
        if factorial_num != 0:
            mok = temp_num // factorial_num
            remain = temp_num % factorial_num
        else:
            mok = 1
            remain = 0
        if remain != 0:
            answer.append(num_list[mok])
            num_list.pop(mok)
        else:
            answer.append(num_list[mok-1])
            num_list.pop(mok-1)
        temp_num = remain
        if cur_num != 0:
            factorial_num = factorial_num // cur_num
        cur_num -= 1
        
    return answer
