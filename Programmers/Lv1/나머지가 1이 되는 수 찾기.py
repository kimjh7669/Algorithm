def solution(n):
    answer = 0
    for j in range(2, n//2):
        if n % j == 1:
            return j
    return n-1
    
