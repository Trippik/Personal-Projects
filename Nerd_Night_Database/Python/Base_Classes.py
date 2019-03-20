import mysql.connector
host_var = "INSERT HOST ADDRESS HERE"
user_var = "INSERT USERNAME HERE"
passwd_var = "INSERT PASSWORD HERE"
database_var = "nerd_night"

class Game:
    def __init__(self, title, console):
        self.title = title
        self.console = console

    def existing_entry_check(self):
        self.nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = self.nerd_night_db.cursor()
        query = ("SELECT game.game_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
        
        cursor.execute(query)
        result = cursor.fetchone()
        cursor.close()
        self.nerd_night_db.close()
        while result:
            if (result [0] == self.title):
                print("item already exists")
                return 1
        else:
            print("item does not exist")
            return 0
                
        
    def add_game(self):
        if (self.existing_entry_check() == 1):
            self.nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
            cursor = self.nerd_night_db.cursor()
            query1 = ("SET SQL_SAFE_UPDATES = 0")
            query2 = ("UPDATE game INNER JOIN console ON game.compatible_console = console.id SET game.quantity_total = game.quantity_total + 1 WHERE game.game_name = " + "'" + self.title + "' AND console.console_name = " + "'" + self.console + "'")
            cursor.execute(query1)
            cursor.execute(query2)
            self.nerd_night_db.commit()
            print("Database record updated")
            cursor.close()
            self.nerd_night_db.close()
        else:
           print("Create new SQL Record")

class query:
    def __init__(self, name, console, code):
        self.name = name
        self.console = console
        self.code = code
        if (self.code == 1 or self.code == 2 or self.code == 3):
            self.game_query()

    def game_query(self):
        self.nerd_night_db = mysql.connector.connect(
            host=host_var,
            user=user_var,
            passwd=passwd_var,
            database=database_var)
        cursor = self.nerd_night_db.cursor()
        query1 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")
        query2 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' ORDER BY game.game_name") 
        query3 = ("SELECT game.game_name, console.console_name FROM game INNER JOIN console ON game.compatible_console = console.id WHERE console.console_name LIKE '%" + self.console + "%' AND WHERE game.game_name LIKE '%" + self.name + "%' ORDER BY game.game_name")   
        if (self.code == 1):
            cursor.execute(query1)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "|| Console:  " + row[1])
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            self.nerd_night_db.close()
        elif (self.code == 2):
            cursor.execute(query2)
            response = cursor.fetchall()
            for row in response:
                print("Name:  " + row[0] + "|| Console:  " + row[1])
            print()
            print("Search complete!!")
            print()
            print()
            cursor.close()
            self.nerd_night_db.close()
