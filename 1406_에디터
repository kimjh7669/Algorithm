import sys
S1 =list(sys.stdin.readline().strip())
S2 = []
N = int(input())

for line in sys.stdin:
        if line[0] == "L" and S1 != []:
                S2.append(S1.pop())
        if line[0] == "D" and S2 != []:
                S1.append(S2.pop())
        if line[0] == "B" and S1 != []:
                S1.pop()
        if line[0] == "P":
                S1.append(line[2])
print("".join(S1 + list(reversed(S2))))


