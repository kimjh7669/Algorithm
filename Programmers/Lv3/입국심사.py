def solution(n, times):
    
    answer = 0
    left = 1
    right = n * max(times)
    
    while left < right:
        mid = (left + right) // 2
        total = 0
        for t in times:
            total += mid // t
            
        if total >= n:
            right = mid
        else:
            left = mid + 1
    
    answer = left
    return answer
