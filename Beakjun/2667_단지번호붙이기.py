import sys
N = int(input())

apart = []
visit = [[0]*N] * N

for i in range(N):
        apart.append(list(map(int, sys.stdin.readline().strip())))
for i in range(N):
        for j in range(len(apart[0])):
                if apart[i][j] == 1:
                        apart[i][j] = -1

num_complex = 0
num_apart = []
if_fisrt = True

left = 0
right = 0
up = 0
down = 0


def dfs(apart, i, j, if_first):
        global num_complex

        if apart[i][j] == 0:
                pass
        elif apart[i][j] == -1:
                if if_first == True:
                        num_complex += 1
                        num_apart.append(0)
                        if_first = False
                apart[i][j] = num_complex
                num_apart[num_complex - 1] += 1

                left = i - 1
                right = i + 1
                up = j - 1
                down = j + 1
                if left < 0:
                        left = 0
                if right >= N:
                        right = N - 1
                if up < 0:
                        up = 0
                if down >= N:
                        down = N - 1

                dfs(apart, left, j, False)
                dfs(apart, right, j, False)
                dfs(apart, i, up, False)
                dfs(apart, i, down, False)


for i in range(N):
        for j in range(N):
                dfs(apart, i, j, True)


num_apart.sort()
print(num_complex)
for i in range(len(num_apart)):
        print(num_apart[i])
