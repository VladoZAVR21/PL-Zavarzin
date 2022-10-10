from random import *
n = 10# Размер массива
l = []# Массив
l2 = []# Множество

l = [(randint(1,10)) for i in range(n)]# Генерация массива
print(l)
l.sort()

for i in l:# Создание множества
    if not(i in l2):
        l2.append(i)
l2.sort()

for i in l2:
    k=0
    for j in l:
        if i == j:
            k += 1
    if k != 1:
        print(i, " kol ", k)
    else:
        print(i, " элемент уникальный")