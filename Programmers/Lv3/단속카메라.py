def solution(routes):
    answer = 0
    routes.sort(key=lambda x:x[0])
    cur_start_number = -40000
    cur_end_number = -39999
    for s_node, f_node in routes:
        if cur_end_number < s_node:
            answer += 1
            cur_start_number = s_node
            cur_end_number = f_node
            continue
        if cur_start_number < s_node:
            cur_start_number = s_node
        if cur_end_number > f_node:
            cur_end_number = f_node
        
    return answer
