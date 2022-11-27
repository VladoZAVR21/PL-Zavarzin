from tkinter import *
from tkinter import messagebox, filedialog, scrolledtext
from tkinter.ttk import *

def clicked():
    c1 = ch1.get()
    c2 = ch2.get()
    sign = combo.get()
    if sign != '':
        if c1.isdigit() and c2.isdigit():
            try:
                string = str(c1 + sign + c2)
                out = str(string + '=' + str(eval(string)))
                lbl.configure(text=out)
            except ZeroDivisionError:
                messagebox.showerror('Математическая ошибка!', 'Деление на ноль невозможно!')
        else:
            messagebox.showerror('Внимание!', 'Ячейки не должны быть пустыми и не должны содержать посторонние символы')
    else:
        lbl.configure(text='Выберите действие')


win = Tk()

win.title("Заварзин Владислав Дмитриевич")
win.geometry('475x450')

tab_control = Notebook(win)
tab1 = Frame(tab_control)
tab_control.add(tab1, text='Калькулятор')
tab2 = Frame(tab_control)
tab_control.add(tab2, text='Чекбокс')
tab3 = Frame(tab_control)
tab_control.add(tab3, text='Текст')

'''*************************** Работа с калькулятором ********************************'''
ch1 = Entry(tab1)
ch1.grid(column=0, row=0)

combo = Combobox(tab1)
combo.grid(column=1, row=0)
combo['values'] = ('+', '-', '*', '/')

ch2 = Entry(tab1)
ch2.grid(column=2, row=0)

lbl = Label(tab1, text='0')
lbl.grid(column=1, row=1)

btn = Button(tab1, text='Рассчитать', command=clicked)
btn.grid(column=3, row=0)
'''************************* Работа с Checkbutton **********************************'''


def check():
    var = ''
    if var1.get():
        if var:
            var += ', '
        var += var1.get()
    if var2.get():
        if var:
            var += ', '
        var += var2.get()
    if var3.get():
        if var:
            var += ', '
        var += var3.get()

    if var:
        messagebox.showinfo('Сообщение', 'Вы выбрали ' + var + ' вариант')
    else:
        messagebox.showinfo('Сообщение', 'Вы ничего не выбрали')


var1 = StringVar()
var1.set('')
var2 = StringVar()
var2.set('')
var3 = StringVar()
var3.set('')
check1 = Checkbutton(tab2, onvalue='первый', offvalue='', variable=var1, text='Первый')
check1.grid(column=0, row=0)
check2 = Checkbutton(tab2, onvalue='второй', offvalue='', variable=var2, text='Второй')
check2.grid(column=1, row=0)
check3 = Checkbutton(tab2, onvalue='третий', offvalue='', variable=var3, text='Третий')
check3.grid(column=2, row=0)

btn_check = Button(tab2, text='Check', command=check)
btn_check.grid(column=3, row=0)
'''*****************************Работа с text***************************************'''


def file_import():
    file = filedialog.askopenfilename(filetypes=(("Text files", " *.txt"), ("all files", " *.* ")))
    text_box.delete('1.0', END)
    with open(file) as open_file:
        lines = open_file.readlines()
        for line in lines:
            text_box.insert(END, f'{line.strip()}\n')


btn_import = Button(tab3, text='Загрузить', command=file_import)
btn_import.pack()
text_box = scrolledtext.ScrolledText(tab3, width=50, height=20)
text_box.pack()

tab_control.pack(expand=1, fill='both')

win.mainloop()
