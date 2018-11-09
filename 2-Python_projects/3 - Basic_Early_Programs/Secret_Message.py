
Users = 'Cam'
i = 0
x = 0
while i <= 0:
    print('Please enter your Username.')
    Username = input()
    if Username == Users: 
        i = 1 
        print('your username is '+Username) 
    else: 
        i = 0
        print('invalid username please retry')

while 1<= i <= 2:
    print('main program initiated')
    i = 3
    print('Would you like to write or recall message (w/r)?')
    WriteRecall = input()
    if WriteRecall == 'w': 
        Message = input()
        print('Message stored, returning to login')
        print('...')
        while x <= 0:
            print('Please enter login')
            Username1 = input()
            if Username1 == Users:
                print('would you like to recall message (y) return to login (n) or end program (end)')
                Response1 = input()
                if Response1 == 'y':
                    print(Message)
                    print('...')
                    print('end of message')
                    x = 0
                elif Response1 == 'n':
                    x=0 
                    print('Acknowleged, returning to login')
                elif Response1 == 'end':
                    print('Acknowleged, deleting secret message and ending program')
                    print('...');
                    x = 2
                else:
                    print('Invalid response, please retry')
                    x=0
