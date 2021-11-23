import sys
N = int(input())

num_dict = {}

num_dict[0] = [1,1,1,0,1,1,1]
num_dict[1] = [0,0,1,0,0,1,0]
num_dict[2] = [1,0,1,1,1,0,1]
num_dict[3] = [1,0,1,1,0,1,1]
num_dict[4] = [0,1,1,1,0,1,0]
num_dict[5] = [1,1,0,1,0,1,1]
num_dict[6] = [1,1,0,1,1,1,1]
num_dict[7] = [1,1,1,0,0,1,0]
num_dict[8] = [1,1,1,1,1,1,1]
num_dict[9] = [1,1,1,1,0,1,1]
num_dict[10] = [0,0,0,0,0,0,0]


for i in range(N):
    answer = 0
    # A, B = map(int, input().split())
    A, B = input().split()
    A_list = []
    B_list = []

    for j in range(5-len(A)):
        A_list.append(num_dict[10])
    for j in A:
        A_list.append(num_dict[int(j)])

    
    for j in range(5-len(B)):
        B_list.append(num_dict[10])
    for j in B:
        B_list.append(num_dict[int(j)])
    # for j in A_list:
    #     print(j)
    # print()
    # for j in B_list:
    #     print(j)
    # print('------------------------')
    for j in range(5):
        for k in range(7):
            if A_list[j][k] != B_list[j][k]:
                answer += 1

    print(answer)
