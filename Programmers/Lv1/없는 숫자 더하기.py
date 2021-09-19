def solution(numbers):
    a = [1,2,3,4,5,6,7,8,9]
    for i in numbers:
        if i in a:
            a.remove(i)
    answer = 0
    for i in a:
        answer+=i
    return answer
