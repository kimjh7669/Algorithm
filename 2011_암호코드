num = list(map(int,list(input())))
n = len(num)
dp = [0]*(n+1)
if num[0] == 0: #암호만들 수 없는 경우
        print(0)
else: # 두개씩 잘라서 비교할거임
        num = [0] + num
        dp[0] = 1
        dp[1] = 1
        for i in range(2,n+1): # 해당 자릿수와 그 앞자리 수에 대해서 __ 또는 _ 으로 변환
                cur1 = num[i] # 한자리
                cur2 = num[i-1]*10 + num[i]
                if 1<=cur1<=9: # 한자리로 변환이 가능하다면
                        dp[i] += dp[i-1] # 직전까지의 dp 그대로
                if 10<=cur2<=26: # 바로 앞자리 수랑 합쳤을 때 두자리수가 만들어져서 변환이 가능하다면
                        dp[i] += dp[i-2] # 앞앞까지의 dp값도 더해줘야함
                        dp[i] %= 1000000
        print(dp[n])
