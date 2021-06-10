N, IDX = map(int,(input().split(' ')))

lst = [i+1 for i in range(N)]
answer = []
while(len(lst) != 0):
    idx = (IDX%len(lst))
    lst =  lst[idx - 1:] + lst[:idx - 1]
    answer.append(lst[0])
    lst = lst[1:]


print('<'+", ".join(map(str, answer))+'>')
