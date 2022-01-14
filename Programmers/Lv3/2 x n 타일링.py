def solution(n):
    answer = 0
    if n == 1:
        return 1
    if n == 2:
        return 2
    if n == 3:
        return 3
    a = 1
    b = 2
    answer = a + b
    for i in range(n-3):
        a = b
        b = answer
        answer = (a + b) % 1000000007
    return answer
