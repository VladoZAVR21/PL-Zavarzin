import traceback
from tkinter import *
import requests

def data_site():
    try:
        url = 'https://api.github.com/users/' + input_text.get()
        site = requests.get(url).json()
        company = site['company']
        created_at = site['created_at']
        email = site['email']
        id = site['id']
        name = site['name']
        with open('export', 'w') as f:
            f.write('company: ' + str(company) + '\n')
            f.write('created_at: ' + str(created_at) + '\n')
            f.write('email: ' + str(email) + '\n')
            f.write('id: ' + str(id) + '\n')
            f.write('name: ' + str(name) + '\n')
            f.write('url: ' + str(url) + '\n')
        print('Done!')
        '''Вывод ошибки в случае чего'''
    except Exception as e:
        print('Error')
        print(traceback.format_exc())

window = Tk()
window.title('Заварзин Владислав')
window.geometry('400x150+0+0')
window.resizable(False, False)
'''Расположение окна посреди экрана'''
x = (window.winfo_screenwidth() - window.winfo_reqwidth()) / 2.35
y = (window.winfo_screenheight() - window.winfo_reqheight()) / 2.35
window.wm_geometry("+%d+%d" % (x, y))

input_text = Entry(window, width=50)
input_text.pack(anchor=N)

btn = Button(window, text='Получить данные', width=15, height=5, command=data_site).pack()

window.mainloop()