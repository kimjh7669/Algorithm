def func(a, b, answer):
    answer += 1
    if a % 2 == 0:
        a = a // 2
    else:
        a = a // 2 + 1
    if b % 2 == 0:
        b = b // 2
    else:
        b = b // 2 + 1
    return answer, a, b



def solution(n,a,b):
    answer = 0
    
    while a!=b:
        answer, a, b = func(a,b,answer)

    return answer
