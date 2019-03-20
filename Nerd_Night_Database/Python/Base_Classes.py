import mysql.connector

class Game:
    def __init__(self, title, console):
        self.title = title
        self.console = console

    def existing_entry_check(self):
        self.nerd_night_db = mysql.connector.connect(
            host="DATABASE_HOST_ADDRESS",
            user="USERNAME",
            passwd="PASSWORD",
            database="nerd_night")
        cursor = self.nerd_night_db.cursor()
        query = ("SELECT game.game_name FROM game WHERE game.game_name = " + "'" + self.title + "'") 
        cursor.execute(query)
        result = cursor.fetchone()
        while result:
            print(result)
            if (result [0] == self.title):
                print("item already exists")
                return 1
        else:
            print("item does not exist")
            return 0
                
        
    def add_game(self):
        if (self.existing_entry_check() == 1):
            print("Add to existing value")
        else:
           print("Create new SQL Record")
