l = []
n = 0 # Число строк
m = 0 # Число столбцов
flag = True
with open("Заварзин_Владислав_Дмитриевич_УБ21_vvod.txt", "r") as fm:
    for row in fm:
        chs = row.replace('\n', '').split(' ')
        l.append(list())
        for ch in chs:
            if flag:
                m += 1 # Считаем столбцы
            l[n].append(int(ch))
            print(ch, end=" ")
        flag = False
        n += 1 # Считаем строки
        print()

# Получаем номер строки k
k = int(input('Введите номер строки k >> ')) - 1

print('*' * 40)

# Сортировка элементов по возрастанию в строке k и всех остальных элементов
for s in range(0, m):
    for i in range(1, m):
        if l[k][i] < l[k][i-1]:
            for j in range(n):
                l[j][i], l[j][i-1] = l[j][i-1], l[j][i]

# Вывод результата
with open("Заварзин_Владислав_Дмитриевич_УБ21_vivod.txt", "w") as fm:
    for row in l:
        fm.write(str(row).replace(']', '\n').replace('[', '').replace(',', ''))
print(f'Отсортированный массив по строке {k + 1} выведен в файл')