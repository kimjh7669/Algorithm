def solution(money):
    answer_list = [0 for _ in range(len(money))]
    answer_list1 = [0 for _ in range(len(money))]
    # using 0th index
    for idx, cash in enumerate(money):
        if idx == 0:
            answer_list[idx] = cash
            answer_list1[idx] = 0
            continue
        elif idx == 1:
            answer_list[idx] = cash
            answer_list1[idx] = cash
            continue
        elif idx == 2:
            answer_list[idx] = answer_list[0] + cash
            answer_list1[idx] = answer_list1[0] + cash
            continue
            
        if answer_list[idx-2] > answer_list[idx-3]:
            answer_list[idx] = cash + answer_list[idx-2]
        else:
            answer_list[idx] = cash + answer_list[idx-3]
            
        if answer_list1[idx-2] > answer_list1[idx-3]:
            answer_list1[idx] = cash + answer_list1[idx-2]
        else:
            answer_list1[idx] = cash + answer_list1[idx-3]
        
        if idx == len(money)-1:
            answer_list[idx] = answer_list[idx-1]
    answer = max(answer_list)
    answer1 = max(answer_list1)
    return max(answer, answer1)
