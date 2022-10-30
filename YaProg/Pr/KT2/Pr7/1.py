def CountChislo(sub_l, n):
    k = 0
    sub_l.sort()
    for i in range(100, n, 1):
        l = []
        l = [int(i/100), int(i/10 % 10), int(i % 10)]
        l.sort()
        if sub_l == l:
            print(i) #подходящие числа под условие
            k += 1
    return k

nn = int(input("Введите число 210<N<231: "))

print("Введите до 3-х чисел через пробел из которых может состоять число")
sub = [int(i) for i in input().split()]

print(CountChislo(sub,nn))