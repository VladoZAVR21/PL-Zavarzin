def posl():
    n = int(input())
    if (n == 0):
        return 0
    else:
        return max(n, posl())
print(posl())