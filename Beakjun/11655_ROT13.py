i = input()
answer = ""
L = []
for A in i:
        if ord(A) >= 65 and ord(A)<= 90:
               num = ord(A) + 13
               if num > 90:
                       num = num - 26
        elif ord(A) >= 97 and ord(A) <= 122:
                num = ord(A) + 13

                if num > 122:
                       num =num - 26
        else:
                num = ord(A)
        L.append(num)

print(''.join(map(chr,L)))
