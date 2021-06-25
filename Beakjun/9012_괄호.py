import sys
N = int(input())

for i in range(N):
        a = sys.stdin.readline()
        answer = True
        if a[0] == ")":
                answer = False
        if a[-1] == "(":
                answer = False
        i = 0
        cnt = 0
        while answer:
                if a[i] == "(":
                        cnt = cnt + 1
                elif a[i] == ")":
                        cnt -= 1

                if cnt < 0:
                        answer = False
                i += 1
                if i == len(a):
                        break
        if answer == False or cnt != 0:
                print("NO")
        else:
                print("YES")

                
