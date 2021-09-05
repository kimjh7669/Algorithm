def solution(str1, str2):
    answer = 0
    str1 = str1.upper()
    print(str1)
    str2 = str2.upper()
    print(str2)
    
    str1_list = []
    str2_list = []
    
    for i in range(len(str1) - 1):
        if ord(str1[i]) >= 65 and ord(str1[i]) <= 90:
            if ord(str1[i+1]) >= 65 and ord(str1[i+1]) <= 90:
                str1_list.append(str1[i] + str1[i+1])
    for i in range(len(str2) - 1):
        if ord(str2[i]) >= 65 and ord(str2[i]) <= 90:
            if ord(str2[i+1]) >= 65 and ord(str2[i+1]) <= 90:
                str2_list.append(str2[i] + str2[i+1])
        
    if len(str1_list) == 0 and len(str2_list) == 0:
        return 65536
    cross = 0
    union = 0
    for i in range(len(str1_list)-1, -1, -1):
        for j in range(len(str2_list)-1,-1,-1):
            if str1_list[i] == str2_list[j]:
                del str1_list[i]
                del str2_list[j]
                cross += 1
                break
    
    union = len(str1_list) + len(str2_list) + cross
    answer = 65536 * cross//union
    
    return answer
