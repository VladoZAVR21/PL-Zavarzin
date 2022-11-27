# Иницилизируем матрицу из файла Заварзин_Владислав_Дмитриевич_УБ21_vvod.txt и выводим на экран
l = []
i = 0
with open("Заварзин_Владислав_Дмитриевич_УБ21_vvod.txt", "r") as fm:
    for row in fm:
        chs = row.replace('\n', '').split(' ')
        l.append(list())
        for ch in chs:
            l[i].append(int(ch))
            print(ch, end=" ")
        i += 1
        print()
# Получение идексов строк подходящих под условие
set_of_index = set()
for i in range(len(l)):
    flag = True
    for j in range(1, len(l[i])):
        if not (l[i][j - 1] <= l[i][j]):
            flag = False
    if not (flag):
        for j in range(1, len(l[i])):
            if not (l[i][j - 1] >= l[i][j]):
                flag = False
    if flag:
        set_of_index.add(i)
# Нахождение максимального элемента среди всех строк
maxx = 0
for i in set_of_index:
    for j in l[i]:
        maxx = max(maxx, j)

with open("Заварзин_Владислав_Дмитриевич_УБ21_vivod.txt", "w") as fm:
    if maxx != 0:
        fm.write(str(maxx))
    else:
        fm.write('Нет таких строк')