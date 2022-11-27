import traceback
from tkinter import *
import requests

def data_site(url):
    try:
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
    except Exception as e:
        print('Error')
        print(traceback.format_exc())

url = 'https://api.github.com/users/'

root = Tk()
root.title('Get data')
root.geometry('400x150+0+0')
root.resizable(False, False)
x = (root.winfo_screenwidth() - root.winfo_reqwidth()) / 2.35
y = (root.winfo_screenheight() - root.winfo_reqheight()) / 2.35
root.wm_geometry("+%d+%d" % (x, y))

input_text = Entry(root, width=50)
input_text.pack(anchor=N)

btn = Button(root, text='Get value', width=10, height=5, command=lambda: [data_site(url + input_text.get())]).pack()

root.mainloop()