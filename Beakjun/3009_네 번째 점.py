A1, B1 = map(int, input().split())
A2, B2 = map(int, input().split())
A3, B3 = map(int, input().split())

if A1 == A2:
    A4 = A3
elif A1 == A3:
    A4 = A2
elif A2 == A3:
    A4 = A1

if B1 == B2:
    B4 = B3
elif B1 == B3:
    B4 = B2
elif B2 == B3:
    B4 = B1
print(A4, B4)
