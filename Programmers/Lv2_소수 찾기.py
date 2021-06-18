from itertools import permutations

def is_prime(n):
    if n < 2:
        return False
    else:
        for i in range(2, n):
            if n % i == 0:
                return False
    return True

def solution(numbers):
    answer = 0
    nums = {1}
    for i in range(len(numbers)):
        permu = list(permutations(numbers, i+1))
        for j in range(len(permu)):
            temp = ""
            for k in permu[j]:
                temp = temp + k
            nums.add(int(temp))
    for i in nums:
        if is_prime(i) == True:
            answer+=1       

    
    return answer
