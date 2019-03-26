import mysql.connector
host_var = "INSERT_HOST_ADDRESS_HERE"
user_var = "INSERT_USERNAME_HERE"
passwd_var = "INSERT_PASSWORD_HERE"
database_var = "nerd_night"           
    

class Game:
    def __init__(self, title, console):
        self.title = title
        self.console = console
        self.state = 3

    def existing_entry_check(self):
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query = ("SELECT game.game_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
        cursor.execute(query)
        result = cursor.fetchone()
        cursor.close()
        nerd_night_db.close()
        while result:
            if (result [0] == self.title):
                print("item already exists")
                self.state = 1
        else:
            print("item does not exist")
            self.state = 0
                
        
    def add_game(self):
        self.existing_entry_check()
#        if (self.existing_entry_check() == 1):
        if (self.state == 1):
            nerd_night_db = mysql.connector.connect(
                host=host_var,
                user=user_var,
                passwd=passwd_var,
                database=database_var)
            cursor = nerd_night_db.cursor()
            query1 = ("SET SQL_SAFE_UPDATES = 0")
            query2 = ("UPDATE game INNER JOIN console ON game.compatible_console = console.id SET game.quantity_total = game.quantity_total + 1 WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
            cursor.execute(query1)
            cursor.execute(query2)
            nerd_night_db.commit()
            print("Database record updated")
            cursor.close()
            nerd_night_db.close()
#        elif (self.existing_entry_check() == 0):
        elif (self.state == 0):
            nerd_night_db = mysql.connector.connect(
                host=host_var,
                user=user_var,
                passwd=passwd_var,
                database=database_var)
            cursor_ = nerd_night_db.cursor()
            query1_1 = ("SET SQL_SAFE_UPDATES = 0")
            query1_2 = ("SELECT COUNT(*) FROM game;")
            query1_3 = ("SELECT id FROM console WHERE console_name LIKE '%" + self.console + "%'")
            cursor_.execute(query1_2)
            result = cursor_.fetchone()
            print(result)
            max_id = result
            new_id = max_id + 1
            print(ned_id)
            cursor_.close()
            cursor2 = nerd_night_db.cursor()
            cursor2.execute(query1_3)
            console_id = cursor2.fetchall()
            cursor2.close()
            query1_4 = ("INSERT INTO game (id, game_name, compatible_console, quantity_total) VALUES (" + new_id + ", " + console_id + ", 1")
            cursor3 = nerd_night_db.cursor()
            cursor3.execute(query1_4)
            nerd_night_db.commit()
            cursor3.close()
            nerd_night_db.close()
            
            

class query:
    def __init__(self, name, console, code):
        self.name = name
        self.console = console
        self.code = code
        if (self.code == 1 or self.code == 2 or self.code == 3):
            self.game_query()
        if (self.code == 4 or self.code == 5):
            self.console_query()

    def game_query(self):
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query1 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")
        query2 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' ORDER BY game.game_name") 
        query3 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' AND game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")   
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

    def console_query(self):
        nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = nerd_night_db.cursor()
        query4 = ("SELECT console.console_name, console.quantity_total FROM console ORDER BY console.console_name")
        query5 = ("SELECT console.console_name, console.quantity_total FROM console WHERE console.console_name LIKE '%" + self.console + "%' ORDER BY console.console_name")
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
