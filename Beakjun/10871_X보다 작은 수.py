N, X = map(int, input().split(' '))

lst = list(map(int, input().split(' ')))
for i in lst:
    if i < X:
        print(i, end = ' ')
