def solution(n):
    answer = 0
    if n == 1:
        return 1
    elif n == 2:
        return 2
    f_num = 1
    s_num = 2
    answer = f_num + s_num
    for i in range(n-3):
        f_num = s_num
        s_num = answer
        answer = (f_num + s_num) % 1234567
    return answer
