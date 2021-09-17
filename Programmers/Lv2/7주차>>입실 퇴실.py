number = [0 for _ in range(1001)]

def solution(enter, leave):
    answer = []
    total_number = len(enter)
    
    for i in range(len(enter)):
        cur_idx = i
        for j in range(len(leave)):
            enter_idx = enter.index(leave[j])
            
            if i == enter_idx:
                break
            if i > enter_idx:
                continue
            if cur_idx <= enter_idx:
                for k in range(enter_idx - cur_idx):
                    number[enter[i] - 1] += 1
                    number[enter[cur_idx + 1] - 1] += 1
                    
                    cur_idx += 1

        
    answer = number[:len(enter)]
                
    return answer
