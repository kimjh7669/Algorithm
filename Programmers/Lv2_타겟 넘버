sign = [-1, 1]
answer = 0

def dfs(numbers, i, target, len_numbers, num):
    global answer
    for j in range(2):
        num_ = num + sign[j] * numbers[i]
        if i == len_numbers - 1:
            if num_ == target:
                answer = answer + 1
            continue
        dfs(numbers, i+1, target, len_numbers, num_)
    
    
    
def solution(numbers, target):
    len_numbers = len(numbers)
    dfs(numbers, 0, target, len_numbers, 0)
    return answer
