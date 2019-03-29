#Import mysql connector functions
import mysql.connector
#Set database server credentials
host_var = "INSERT HOST ADDRESS HERE"
user_var = "INSERT USERNAME HERE "
passwd_var = "INSERT PASSWORD HERE"
database_var = "nerd_night"
    
#Create class game
class Game:
    #Give each game a title and compatible console name and set it's defualt state to 3
    def __init__(self, title, console):
        self.title = title
        self.console = console
        self.state = 3

    #Function to check for exisiting records of a game
    def existing_entry_check(self):
        #Connect to server and open session
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        #Query database to find any existing copies of the game
        query = ("SELECT game.game_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
        cursor.execute(query)
        #Return first result of query
        result = cursor.fetchone()
        #Close session and disconnect from server
        cursor.close()
        nerd_night_db.close()
        #If query returns games with same name set state to 1 if not set state to 0
        while result:
            if (result [0] == self.title):
                print("item already exists")
                self.state = 1
        else:
            print("item does not exist")
            self.state = 0
                
    #Function to add a game to the database   
    def add_game(self):
        #Run existing entry function
        self.existing_entry_check()
        #If the games state is 1 
        if (self.state == 1):
            #Connect to server and open session
            nerd_night_db = mysql.connector.connect(
                host=host_var,
                user=user_var,
                passwd=passwd_var,
                database=database_var)
            cursor = nerd_night_db.cursor()
            #Update records to increase the total quantity of the game by 1 in the existing entry
            query1 = ("SET SQL_SAFE_UPDATES = 0")
            query2 = ("UPDATE game INNER JOIN console ON game.compatible_console = console.id SET game.quantity_total = game.quantity_total + 1 WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
            cursor.execute(query1)
            cursor.execute(query2)
            #Commit changes to server
            nerd_night_db.commit()
            print("Database record updated")
            #Close session and disconnect from server
            cursor.close()
            nerd_night_db.close()

        #If the games state is 0 
        elif (self.state == 0):
            #Connect to database and open session
            nerd_night_db = mysql.connector.connect(
                host=host_var,
                user=user_var,
                passwd=passwd_var,
                database=database_var)
            cursor_ = nerd_night_db.cursor()
            #Create new record in database for game
            query1_2 = ("SELECT COUNT(*) FROM game;")
            query1_3 = ("SELECT id FROM console WHERE console_name LIKE '%" + self.console + "%'")
            #Generate new id number for new game entry
            cursor_.execute(query1_2)
            result = cursor_.fetchall()
            for row in result:
                max_id = row[0]
            new_id = max_id + 1
            new_id = str(new_id)
            cursor_.close()
            cursor2 = nerd_night_db.cursor()
            #Find and save the id of compatible console in database
            cursor2.execute(query1_3)
            result2 = cursor2.fetchall()
            for row in result2:
                console_id = row[0]
            cursor2.close()
            console_id = str(console_id)
            query1_4 = ("INSERT INTO game (id, game_name, compatible_console, quantity_total) VALUES (" + new_id + ", '" + self.title + "', " + console_id + ", 1)")
            #Insert new game into database
            cursor3 = nerd_night_db.cursor()
            cursor3.execute(query1_4)
            #Commit changes to server
            nerd_night_db.commit()
            #Close session and disconnect from server
            cursor3.close()
            nerd_night_db.close()
            
            
#Create class query
class query:
    #Give each query a name, a console, and a code
    def __init__(self, name, console, code):
        self.name = name
        self.console = console
        self.code = code
        #If the query's code is 1, 2, or 3 run the game_query
        if (self.code == 1 or self.code == 2 or self.code == 3):
            self.game_query()
        #If the query's code is 4 or 5 run the console_query
        elif (self.code == 4 or self.code == 5):
            self.console_query()
        #If the query's code is 6 or 7 run the controller_query
        elif (self.code == 6 or self.code == 7):
            self.controller_query()
        #If the query's code is 9 run the peripheral_query
        elif (self.code == 9):
            self.peripheral_query()

    #Function to query game records in the database
    def game_query(self):
        #Connect to server and open session
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query1 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")
        query2 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' ORDER BY game.game_name") 
        query3 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' AND game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")   
        #Search for game by title
        if (self.code == 1):
            cursor.execute(query1)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "\nConsole:  " + row[1] + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()
        #Search for game by compatible console
        elif (self.code == 2):
            cursor.execute(query2)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "\nConsole:  " + row[1] + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()
        #Search for game by title and compatible console
        elif (self.code == 3):
            cursor.execute(query3)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "\nConsole:  " + row[1] + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()

    #Funtion to query console records in the database 
    def console_query(self):
        #Connect to database and open session
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query4 = ("SELECT console.console_name, console.quantity_total FROM console ORDER BY console.console_name")
        query5 = ("SELECT console.console_name, console.quantity_total FROM console WHERE console.console_name LIKE '%" + self.console + "%' ORDER BY console.console_name")
        #Show list of all consoles in database
        if (self.code == 4):
            cursor.execute(query4)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "\nNumber in Inventory:  " + str(row[1]) + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()
        #Search for consoles by console name
        if (self.code == 5):
            cursor.execute(query5)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "\nNumber in Inventory:  " + str(row[1]) + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()

    #Function to query controller records in database
    def controller_query(self):
        #Connect to server and open session
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query6 = ("SELECT peripheral.peripheral_name, peripheral.quantity_total, console.console_name FROM peripheral INNER JOIN console ON peripheral.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' AND peripheral.object = 3")
        query7 = ("SELECT peripheral.peripheral_name, peripheral.quantity_total, console.console_name FROM peripheral INNER JOIN console ON peripheral.compatible_console = console.id WHERE peripheral.object = 3")
        #Search for controllers by compatible console name
        if (self.code == 6):
            cursor.execute(query6)
            response = cursor.fetchall()
            for row in response:
                print("Controler Name:  " + row[0] + "\nNumber in Inventory:  " + str(row[1]) + "\nConsole Name:  " + row[2] + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()
        #Show list of all controllers in database
        elif (self.code == 7):
            cursor.execute(query7)
            response = cursor.fetchall()
            for row in response:
                print("Controler Name:  " + row[0] + "\nNumber in Inventory:  " + str(row[1]) + "\nConsole Name:  " + row[2] + "\n____________________________________________________________________")
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            nerd_night_db.close()

    #Function to query peripheral records in database
    def peripheral_query(self):
        #Connect to server and open session
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        #Show list of all peripherals in database
        query9 = ("SELECT peripheral.peripheral_name, peripheral.quantity_total, console.console_name FROM peripheral INNER JOIN console ON peripheral.compatible_console = console.id WHERE object <> 3 ORDER BY console.console_name")
        cursor = nerd_night_db.cursor()
        cursor.execute(query9)
        response = cursor.fetchall()
        for row in response:
            print("Controler Name:  " + row[0] + "\nNumber in Inventory:  " + str(row[1]) + "\nCompatible Console:  " + row[2] + "\n____________________________________________________________________")
        print()
        print("Search complete!!")
        print()
        print()
        cursor.close()
        nerd_night_db.close()
