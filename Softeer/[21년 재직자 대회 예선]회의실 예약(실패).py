import sys
N, M = map(int, input().split())

room_name_list = []
room_name_available = {}
for i in range(N):
    temp = input()
    room_name_list.append(temp)
    room_name_available[temp] = [9,10,11,12,13,14,15,16,17]

for i in range(M):
    room_name, start_time, end_time = input().split()
    start_time, end_time = int(start_time), int(end_time)
    for j in range(start_time, end_time):
        room_name_available[room_name].remove(j)

room_name_list.sort()
for room_idx, room_name in enumerate(room_name_list):
    print(f"Room {room_name}:")
    print_now = False
    if len(room_name_available[room_name]) == 0:
        print("Not available")
    else:
        room_avail_list = []
        s_time = room_name_available[room_name][0]
        c_time = room_name_available[room_name][0]
        for idx in range(len(room_name_available[room_name])):
            cur_time = room_name_available[room_name][idx]
            # print(f'c_time:{c_time}, cur_time:{cur_time}')
            if idx == 0:
                pass
            elif c_time + 1 != cur_time:
                # print(f"{s_time}-{c_time+1}")
                if len(str(s_time)) == 1:
                    stime = '09'
                else:
                    stime = str(s_time)
                room_avail_list.append(f"{stime}-{c_time+1}")
                s_time = cur_time
            elif idx == len(room_name_available[room_name])-1:
                if len(str(s_time)) == 1:
                    stime = '09'
                else:
                    stime = str(s_time)
                
                room_avail_list.append(f"{stime}-{cur_time+1}")
            c_time = cur_time
        print(f"{len(room_avail_list)} available:")
        for k in room_avail_list:
            print(k)
    if room_idx != len(room_name_list)-1:
        print("-----")


