from random import *

n = 10 # размер массива

l = [(randint(1,40)) for i in range(n)] # создание массива
print(l) # вывод изначального массива

for i in range(n): # обработка массива по заданию
    if l[i]<10:
        l[i]=0
    if l[i]>20:
        l[i]=1

print(l) # вывод обработанного массива