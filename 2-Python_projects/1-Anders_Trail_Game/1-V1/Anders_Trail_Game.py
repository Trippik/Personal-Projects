print('Welcome to the Anders Trail! Spend your 100 Coin on the supplies youll need for your journey')
Buy = 1
Stage = 0
coin = 100
water = 0
Food = 0
Aid = 0
while Buy == 1:
    print('a. Water - 1 Coin per Barrel')
    print('b. Canned Food - 5 Coin per Can')
    print('c. First Aid Kit - 25 Coin per Kit')
    print('Type the letter corresponding to the items you wish to buy')
    BuyInput1 = input()
    Buy = 0
    if (BuyInput1 == 'a') & (coin > 0):
        print('How many barrels would you like to buy?')
        BuyInputA1 = input()
        WantedBarrel = int(BuyInputA1)
        BarrelAllowed = coin/WantedBarrel
        if BarrelAllowed >= 1:
            water = water + WantedBarrel
            coin = coin - WantedBarrel
            WaterString = str(water)
            CoinString = str(coin)
            print('You now have ' + WaterString + ' Barrels of water and ' + CoinString + ' Coin, do you wish to buy more (y/n)')
            BuyInputA2 = input()
            if BuyInputA2 == 'y':
                Buy = 1
            elif BuyInputA2 == 'n':
                Buy = 0
                Stage = 1
        elif BarrelAllowed < 1:
            CoinString = str(coin)
            print('You only have ' + CoinString + ' Coin Left, returning to market screen' )
            Buy = 1
    elif (BuyInput1 == 'b') & (coin > 4):
        print('How many cans would you like to buy?')
        BuyInputB1 = input()
        WantedCan = int(BuyInputB1)
        CanAllowed = coin/(WantedCan*5)
        if CanAllowed >= 1:
            Food = Food + WantedCan
            coin = coin - (WantedCan*5)
            FoodString = str(Food)
            CoinString = str(coin)
            print('You now have ' + FoodString + ' Food and ' + CoinString + ' Coin, do you wish to buy more (y/n)')
            BuyInputB2 = input()
            if BuyInputB2 == 'y':
                Buy = 1
            elif BuyInputB2 == 'n':
                Buy = 0
                Stage = 1
        elif CanAllowed < 1:
            CoinString = str(coin)
            print('You only have ' + CoinString + ' Coin Left, returning to market screen' )
            Buy = 1
