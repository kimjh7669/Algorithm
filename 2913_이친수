import sys
#3 - 2
'''
10
1

101
100
2

1010
1001
1000
3

10100
10101
10010
10001
10000
5

101000
101010
101001
100100
100101
100010
100001
100000
8

1010000
1010100
1010010
1010001
1010101
1001000
13



'''
N = int(input())

temp1 = 1
temp2 = 2
temp3 = 3
sum = 0
if N == 1:
        print(1)
elif N == 2:
        print(1)
elif N == 3:
        print(2)
else:
        for i in range(N - 3):
                tmp = temp1
                temp1 = temp2
                temp2 = tmp + temp2
                # print(temp1, temp2)
        print(temp2)
