from itertools import combinations

def solution(orders, course):
    answer = []
    for crs in course:
        menu_dict = {}
        for order in orders:
            if crs > len(order):
                continue
            combi_list = list(combinations(sorted(order), crs))
            for x in range(len(combi_list)):
                try:
                    menu_dict[''.join(combi_list[x])] += 1
                except:
                    menu_dict[''.join(combi_list[x])] = 1
            
        sorted_dict = dict(sorted(menu_dict.items(), key=lambda item: item[1], reverse = True))
        
        max_num = 2
        CAN_APPEND = False
        temp_list = []
        for num in range(len(sorted_dict)):
            if len(sorted_dict) > num:
                num_from_dict = list(sorted_dict.keys())[num]
                if sorted_dict[num_from_dict] >= max_num:
                    CAN_APPEND = True
                    max_num = sorted_dict[num_from_dict]
                    temp_list.append(num_from_dict)
            else:
                break
        for temp in temp_list:
            answer.append(temp)
        
    answer.sort()
    return answer
