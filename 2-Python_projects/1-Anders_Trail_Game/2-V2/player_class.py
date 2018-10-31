class Player:
    def __init__(self, name):
        self.name = name
        self.health = 100
        self.coin = 100
        self.water = 0
        self.food = 0
        self.aid = 0
    def print_health(self):
        print(self.name, "has a health of", self.health,"of 100 remaining")
        print()

    def print_coin(self):
        print(self.name, "currently has", self.coin, "coin")
        print()

    def print_water(self):
        print(self.name, "currently has", self.water, "water")
        print()

    def print_food(self):
        print(self.name, "currently has", self.food, "food")
        print()

    def print_aid(self):
        print(self.name, "currently has", self.aid, "aid")
        print()

    def print_status(self):
        print(self.name, "has a health of", self.health,"of 100 remaining")
        print(self.name, "currently has", self.coin, "coin")
        print(self.name, "currently has", self.water, "water")
        print(self.name, "currently has", self.food, "food")
        print(self.name, "currently has", self.aid, "aid")

#THIS CODE IS FOR TESTING OF THE CLASS, IT SHOULD BE COMMENTED OUT IN NORMAL OPERATION
#jim = Player("Jim")

#jim.print_health()
#jim.print_coin()
#jim.print_water()
#jim.print_food()
#jim.print_status()
        

