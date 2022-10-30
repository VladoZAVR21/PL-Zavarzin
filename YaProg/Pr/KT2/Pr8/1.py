from random import *
# Получаем ширину и высоту матрицы
n = int(input('Введите число строк двумерного массива >> '))
m = int(input('Введите число столбцов двумерного массива >> '))
# Иницилизируем и генерируем матрицу
l = []
for i in range(n):
    l.append(list())
    for j in range(m):
        l[i].append(randint(0, 100))
# Выводим матрицу
# print(l)
for i in range(n):
    for j in range(m):
        print(l[i][j], end=" ")
    print()
print()
# Получение идексов строк подходящих под условие
set_of_index = set()
for i in range(len(l)):
    flag = True
    for j in range(1, len(l[i])):
        if not(l[i][j - 1] <= l[i][j]):
            flag = False
    if not(flag):
        for j in range(1, len(l[i])):
            if not(l[i][j - 1] >= l[i][j]):
                flag = False
    if flag:
        set_of_index.add(i)
# Нахождение максимального элемента среди всех строк
maxx = 0
for i in set_of_index:
    for j in l[i]:
        maxx = max(maxx, j)

if maxx != 0:
    print(maxx)
else:
    print('Нет таких строк')