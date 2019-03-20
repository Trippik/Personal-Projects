import mysql.connector
from Base_Classes import *

def startup():
    database_connect = mysql.connector.connect(
        host="DATABASE_HOST_ADDRESS",
        user="USERNAME",
        passwd="PASSWORD",
        database="nerd_night")
    print("*************************************************")
    print("Welcome to the Nerd Night Database")
    print("*************************************************")

def add_game():
    print("Please enter game title")
    game_title = input()
    print("Please enter compatible console")
    game_console = input()
    game = Game(game_title, game_console)
    game.add_game()
    
def add_item():
    print()
    print("Please select the catagory of the item you are adding")
    print("1. Game")
    print("2. Console")
    print("3. Controller")
    print("4. Peripheral")
    add_option = int(input())
    if (add_option == 1):
        add_game()
    elif (add_option == 2):
        print("yay")
    elif (add_option == 3):
        print("yay")
    elif (add_option == 4):
        print("yay")

def option(user_option):
    if (user_option == 1):
        print("yay")
    elif (user_option == 2):
        add_item()
    elif (user_option == 3):
        startup()
        main_menu()

def main_menu():
    print()
    print("Would you like to?")
    print("1. Query Nerd Night Inventory?")
    print("2. Add an Item to Nerd Night Inventory?")
    print("3. Exit")
    print("(Please enter number)")
    user_input = int(input())
    option(user_input)
    

startup()
main_menu()
