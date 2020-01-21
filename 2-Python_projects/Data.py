#Import Necessary Functions
import pandas as pd
import psycopg2
from tkinter import *

#Classes for GUI windows
class menu(Tk):
    def __init__(self, title, heading, option_1):
        super().__init__()
        self.geometry("500x500")
        self.title(title)
        self.configure(height=700, width=1000)
        self.heading = Label(text=heading)
        self.heading.configure(font="Arial 16", fg="black")
        self.heading.pack(anchor=N)
        self.option_1 = Button(text=option_1)
        self.option_1.configure(font="Arial 12", fg="black")
        self.option_1.place(relx=0.5, rely=0.5, anchor=CENTER)


main_menu = menu("Thing", "Main Menu", "Trig")
main_menu.mainloop()
