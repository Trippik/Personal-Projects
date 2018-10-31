import math

def Specs():
    print('Please input the weight of helicopter in KGs')
    WeightInput = input()
    global WeightCraft 
    WeightCraft = int(WeightInput)
    WeightDisplay = str(WeightCraft)
    #Take the user input of weight and convert it to an integer value
    print('Weight of craft stored as ' + WeightDisplay + ' KGs')
    print('...')
    #This section calculates the maximum force in Newtons produced by the Helicopter Rotor
    print('Please input the radius of the main rotor in meters')
    RotorInput = input()
    RotorSize = float(RotorInput)
    #Record the input and store it as a floating value
    print('...')
    print('Please input the height of the area of effect of the main rotor in meters')
    EffectInput = input()
    EffectHeight = float(EffectInput)
    #Record the input and store it as a floating value
    print('Please input target altitude in meters')
    AirInput = input()
    AirAltitude = float(AirInput)
    AirWeight = 1.2 - (0.0004*AirAltitude)
    #Record the input and store it as a floating value
    print('Please input max airspeed from rotor in Km per hour at sea level')
    SpeedInput = input()
    AirSpeedRaw = float(SpeedInput)
    AirSpeedRaw1 = AirSpeedRaw*1000
    AirSpeed = (AirSpeedRaw1/60)/60
    #Record the input in Kmh convert it to M/S and store it as a floating value
    RadiusPart = RotorSize**2 
    PiPart = math.pi*RadiusPart
    PiHeight = PiPart*EffectHeight
    mass = PiHeight*AirWeight
    global MaxRotorForce
    MaxRotorForce = mass*AirSpeed
    MaxRotorDisplay = str(MaxRotorForce)
    print('Max rotor force stored as ' + MaxRotorDisplay + ' Newtons')
    print('...')
    #Calculate maximum force possible from main rotor using a form of the F=MA formula
    print('Please input the rate of throttle as a decimal')
    ThrottleInput = input()
    global ThrottleCraft 
    ThrottleCraft = float(ThrottleInput)
    ThrottleDisplay = str(ThrottleCraft)
    print('Rate of Throttle stored as ' + ThrottleInput)
    print('...')
    #Record the input and store it as a floating value
    return;
#Function for intaking the specs of the Helicopter

def MainCalculation():
    print('Ready for calculation')
    print('...')
    print('please enter the helicopters angle of attack?')
    AngleInput = input()
    AngleCraft = float(AngleInput)
    #Take the user input of angle of attack and store it as a floating value
    print ('Beginning calculation')
    RadianAngle = math.radians(AngleCraft)
    #Convert angle of attack to Radians
    CosPart= math.cos(RadianAngle)
    #Calculate the cosine of the angle of attack
    VerticalAccel = (CosPart*(MaxRotorForce*ThrottleCraft)-(3.2*WeightCraft))/WeightCraft
    #Calculate the final vertical rate of acceleration accounting for the approximate force of gravity on earth and the weight of the craft
    VerticalString = str(VerticalAccel)
    print('Your vertical Rate of Acceleration is ' + VerticalString +' M/S^2')
    #Convert the value to a string and display
    CosPartHoriz = math.cos((1.57-RadianAngle))
    HorizAccel = (CosPartHoriz*(MaxRotorForce*ThrottleCraft))/WeightCraft
    #Calculate the horizontal rate of acceleration 
    HorizString = str(HorizAccel)
    print('Your Horizontal Rate of Acceleration is ' + HorizString + 'M/S^2')
    #Convert the value to a string and display
    return;
#Function that calculates the horizontal and vertical velocity of the helicopter using specs

def QuestionFunction():
    print('Would you like to:')
    print('a. Enter new craft Specifications')
    print('b. Calculate a new angle of attack for the same craft')
    print('c. Exit the program')
    UserInput1 = input()
    if (UserInput1 == 'a'):
        MainFunction()
    if(UserInput1 == 'b'):
        MainCalculation()
        QuestionFunction()
    if(UserInput1 == 'c'):
        print('Shutting Down Program')
        Shutdown()
    return;
#Function that asks the user wheter they want to re-enter specs, re calculate, or quit

def MainFunction():
    Specs()
    MainCalculation()
    QuestionFunction()
    return;
#Primary program function

def Shutdown():
    exit
    return;
#Function that ends program

MainFunction()
