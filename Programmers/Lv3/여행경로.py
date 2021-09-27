def solution(tickets): 
    answer = [] 
    # start 지점부터 tickets 내에서 used_ticket에 없는(사용하지 않은) 항공권들로 여행경로 찾기 
    def DFS(tickets, start, used_ticket): 
        # start에서 다음으로 이동할 공항 찾기 
        for i in range(len(tickets)): 
            # 출발 공항이 start와 같고, 사용하지 않은 항공권인 경우 
            if tickets[i][0] == start and i not in used_ticket: 
                used_ticket.append(i) 
                # 항공권 사용 체크 
                DFS(tickets, tickets[i][1], used_ticket) 
                # 도착 항공에서부터 다음 여행경로 찾기 
                # 항공권을 모두 사용한 경우 DFS 종료 
                if len(used_ticket) == len(tickets): 
                    return 
                # 도착 항공에서부터 다음 여행경로를 찾았음에도 항공권을 모두 사용하지 않은 것은 
                # 해당 항공권을 지금 사용하는 것이 맞지 않으므로 used_ticket에서 삭제 
                else: 
                    used_ticket.pop() 
    new_tickets = sorted(tickets, key=lambda x: (x[0], x[1])) 
    # 항공권 오름차순 정렬 
    used_ticket = [] 
    # 사용한 항공권 index 저장하는     list 
    DFS(new_tickets, "ICN", used_ticket) 
    # ICN을 시작으로 DFS 수행 
    # 거쳐간 공항을 answer에 저장 
    answer = ["ICN"] 
    for ticket_num in used_ticket: 
        answer.append(new_tickets[ticket_num][1]) 
    return answer
