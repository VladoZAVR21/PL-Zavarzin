def rec(a, b):
    if a < b:
        print(a, end=' ')
        rec(a+1, b)
    elif b < a:
        print(a, end=' ')
        rec(a-1, b)
    if a==b:
        print(a)
a = int(input())
b = int(input())
rec(a, b)