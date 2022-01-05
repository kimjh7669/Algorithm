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


# 문제 설명
# n명의 사람이 일렬로 줄을 서고 있습니다. n명의 사람들에게는 각각 1번부터 n번까지 번호가 매겨져 있습니다. n명이 사람을 줄을 서는 방법은 여러가지 방법이 있습니다. 예를 들어서 3명의 사람이 있다면 다음과 같이 6개의 방법이 있습니다.

# [1, 2, 3]
# [1, 3, 2]
# [2, 1, 3]
# [2, 3, 1]
# [3, 1, 2]
# [3, 2, 1]
# 사람의 수 n과, 자연수 k가 주어질 때, 사람을 나열 하는 방법을 사전 순으로 나열 했을 때, k번째 방법을 return하는 solution 함수를 완성해주세요.

# 제한사항
# n은 20이하의 자연수 입니다.
# k는 n! 이하의 자연수 입니다.
# 입출력 예
# n	k	result
# 3	5	[3,1,2]
# 입출력 예시 설명
# 입출력 예 #1
# 문제의 예시와 같습니다.
