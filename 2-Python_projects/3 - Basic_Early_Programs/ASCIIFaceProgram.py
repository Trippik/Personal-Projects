loop = True
counter = 1
def DrawFace():
    print('Please input Hair Character')
    Hair = input()
    print('Please input Eye Character')
    Eye = input()
    print('Please input Mouth Character')
    Mouth = input()
    print(Hair+Hair+Hair+Hair+Hair+Hair+Hair+Hair+Hair+Hair)
    print('|        |')
    print('| '+Eye+'    '+Eye+' |')
    print('|    >   |')
    print('|        |')
    print('| '+Mouth+Mouth+Mouth+Mouth+Mouth+Mouth+' |')
    print()
    print()

while(loop == True):
    if(counter > 1):
        print("Do you wish to continue?")
        userinput = input()
        if(userinput == "No"):
            loop = False
        else:
            DrawFace()
    else:
        DrawFace()
        counter = counter + 1

input("Press any key to exit")
