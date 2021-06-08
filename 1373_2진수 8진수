import sys
N= input()

answer =""

len_N = len(N)
if len_N % 3 == 0:
        N_iter = len_N//3
else:
        N_iter = len_N//3 + 1

start_n = len_N
end_n = len_N - 3
for i in range(N_iter - 1, -1, -1):
        if N[end_n:start_n] == "000" :
                answer = "0" + answer
        elif N[end_n:start_n] == "001"or N[end_n:start_n] == "1":
                answer = "1" + answer
        elif N[end_n:start_n] == "010"or N[end_n:start_n] =="10":
                answer = "2" + answer
        elif N[end_n:start_n] == "011"or N[end_n:start_n] =="11":
                answer = "3" + answer
        elif N[end_n:start_n] == "100":
                answer = "4" + answer
        elif N[end_n:start_n] == "101":
                answer = "5" + answer
        elif N[end_n:start_n] == "110":
                answer = "6" + answer
        elif N[end_n:start_n] == "111":
                answer = "7" + answer
        
        start_n -= 3
        end_n -= 3
        if end_n < 0:
                end_n = 0
if N == "0":
        print(0)
else:
        print(answer)
