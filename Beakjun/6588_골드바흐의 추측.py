import sys
def def_sosu(N):
        sosu = [0] * N
        sosu[0] = 1
        for i in range(1, N//2 + 1):
                for j in range(2, (N//(i+1))+1):
                        duv = ((i+1) * j) % N
                        if duv >= N:
                                break
                        sosu[duv - 1] = 1
        return sosu

problem_list = []

for line in sys.stdin:
        line = int(line.strip())
        problem_list.append(line)

lst = def_sosu(1000000)

for line in problem_list:
        if line == 0:
                pass
        elif line < 5:
                print("Goldbach's conjecture is wrong.")
        else:
                for i in range(line//2):
                        if lst[i] == 0:
                                if lst[line - i - 2] == 0:
                                        print("{} = {} + {}".format(line, i+1, line- i-1))
                                        break

