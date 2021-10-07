def solution(n, left, right):
    answer = []
    first_idx = left//n + 1
    last_idx = right//n + 1
    for i in range(left, right+1):
        temp_idx = i // n + 1
        temp_num = i % n + 1
        if temp_num < temp_idx:
            temp_num = temp_idx
        answer.append(temp_num)    
    return answer
