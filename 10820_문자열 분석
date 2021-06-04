import sys
s = []
for line in sys.stdin:
        line = line.strip('\n')
        lower = 0
        upper = 0
        num = 0
        space = 0
        for i in line:
                if i == ' ':
                        space += 1
                elif ord(i) >= 97 and ord(i) <= 123:
                        lower += 1
                elif ord(i) <= 92 and ord(i) >= 65:
                        upper += 1
                else:
                        num += 1
        print(str(lower) + ' ' + str(upper) + ' ' + str(num) + ' ' + str(space))

