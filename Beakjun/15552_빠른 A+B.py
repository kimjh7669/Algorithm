import sys
N = input()
for i in range(int(N)):
    a, b = sys.stdin.readline().strip().split()
    
    print(int(a)+int(b))
