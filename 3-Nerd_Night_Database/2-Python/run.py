from Base_Classes import *

def startup():
#Function that writes a greeting message to the screen
    print("*************************************************")
    print("Welcome to the Nerd Night Database")
    

def new_section():
#Function that writes appropriate messages and spacing for mew menus and other new function/messages
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("*************************************************")

def add_game():
#Function for adding new games to the nerd night database
    print("Please enter game title")
    game_title = input()
    print("Please enter compatible console")
    game_console = input()
    game = Game(game_title, game_console)
    #Create object based on the game class imported from the Base_Classes file
    game.add_game()
    #Run the add game routine for the newly created object

def query_function(game_title, console, item_code):
#Function for creating necessary object within correct class when querying the nerd night database
    print("Starting search")
    print("--------------------------------------------------------------")
    print("--------------------------------------------------------------")
    search = query(game_title, console, item_code)
    #Create an object called search based on the query class imported from the Base_Classes file
    print("Would you like to:")
    print("1. Search for another item")
    print("2. Return to main menu")
    user_response = int(input())
    if (user_response == 1):
        new_section()
        query_item()
    elif (user_response == 2):
        new_section()
        main_menu()
    #Once the appropriate routines from the search/query object is complete return to the above sub menu
        
        
    
def add_item():
#Function for adding new items to the nerd night database
    print()
    print("Please select the catagory of the item you are adding")
    print("1. Game")
    print("2. Console")
    print("3. Controller")
    print("4. Peripheral")
    add_option = int(input())
    print()
    if (add_option == 1):
        add_game()
    elif (add_option == 2):
        print("yay")
    elif (add_option == 3):
        print("yay")
    elif (add_option == 4):
        print("yay")
    else:
        print("Invalid response, returning to main menu")
        main_menu()
    #Above is basic menu system

def query_item():
#Function for taking in necessary user data when querying nerd night database and passing it the query_function()
    print()
    print("Please select the catagory of the item you are looking for")
    print("1. Game")
    print("2. Console")
    print("3. Controller")
    print("4. Peripheral")
    query_option = int(input())
    new_section()
    #If user is searching for game run code below
    if (query_option == 1):
        print("Would you like to search by:")
        print("1. Game title")
        print("2. Compatible Console")
        print("3. Or both?")
        user_response1 = int(input())
        if (user_response1 == 1):
            print("Please input game title")
            title = input()
            query_function(title, "IGNORE", 1)
        elif (user_response1 == 2):
            print("Please input console")
            console_name = input()
            query_function("IGNORE", console_name, 2)
        elif (user_response1 == 3):
            print("Please input game title")
            game_title = input()
            print("Please input console")
            console_name = input()
            query_function(game_title, console_name, 3)
    #If user is searching for a console run code below        
    elif (query_option == 2):
        print("Would you like to:")
        print("1. See a list of consoles in inventory")
        print("2. Search for a console by name")
        user_response2 = int(input())
        if (user_response2 == 1):
            query_function("IGNORE", "IGNORE", 4)
        elif (user_response2 == 2):
            print("Please input console name")
            console_name = input()
            query_function("IGNORE", console_name, 5)
        print("insert controller query code")
    #If user is searching for a controller run code below    
    elif (query_option == 3):
        print("insert Peripheral Query Code")

def option(user_option):
#Function for processing user responses from main menu
    if (user_option == 1):
        query_item()
    elif (user_option == 2):
        add_item()
    elif (user_option == 3):
        exit
        

def main_menu():
#Main menu function
    print()
    print("Would you like to?")
    print("1. Query Nerd Night Inventory?")
    print("2. Add an Item to Nerd Night Inventory?")
    print("3. Exit")
    print("(Please enter number)")
    user_input = int(input())
    new_section()
    option(user_input)
    
#Run startup and main menu
startup()
main_menu()
