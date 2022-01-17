def fac(n): # 우선 팩토리얼을 계산해주는 함수
    if n == 1: # n=1 일 때는 
        return 1 # 1을 return 하고
    return n* fac(n-1) # 그렇지 않을 때는 n에 fac(n-1)을
                       #  곱하는 방식으로 재귀적으로 계산
def solution(n): # 답을 구하는 함수
    return fac(2*n)/(fac(n+1) * fac(n)) # 카탈랑 수를 표현
