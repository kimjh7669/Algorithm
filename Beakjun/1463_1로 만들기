def Cal(temp):
    p = [] 
    for i in temp:
        p.append(i - 1)
        if i % 2 == 0:
            p.append(i/2)
        if i % 3 == 0:
            p.append(i/3)
    return p


X = int(input())
count = 0
momentum = [X]

while momentum.count(1) < 1:
        temp = momentum
        momentum = Cal(temp)
        count +=1

print(count)
