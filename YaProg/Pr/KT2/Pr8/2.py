from random import *

# Получаем ширину и высоту матрицы
n = int(input('Введите число строк двумерного массива >> '))
m = int(input('Введите число столбцов двумерного массива >> '))
# Получаем номер строки k
k = int(input('Введите номер строки k >> ')) - 1

# Иницилизируем и генерируем матрицу
l = []
for i in range(n):
    l.append(list())
    for j in range(m):
        l[i].append(randint(0, 100))

# Вывод матрицы
for i in l:
    print(i)

print('*' * 40)

# Сортировка элементов по возрастанию в строке k и всех остальных элементов
for s in range(0,m):
    for i in range(1, m):
        if l[k][i] < l[k][i-1]:
            for j in range(n):
                l[j][i], l[j][i-1] = l[j][i-1], l[j][i]

# Вывод результата
print(f'Отсортированный массив по строке {k + 1}:')
for i in l:
    print(i)
