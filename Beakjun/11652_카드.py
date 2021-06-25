import sys
N = int(input())
dic = {}

for i in range(N):
        a = int(sys.stdin.readline())
        try:
                dic[a] += 1
        except:
                dic.update({a:1})
sorted_x = dict(sorted(dic.items(), key=lambda kv: kv[0]))
sorted_x = sorted(sorted_x.items(), key=lambda kv: kv[1], reverse = True)
print(sorted_x[0][0])
