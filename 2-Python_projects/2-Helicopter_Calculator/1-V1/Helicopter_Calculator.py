#This program is designed to use basic Newtonian physics to calculate the rate of acceleration of a helicopter
#At a given, altitude, angle of attack, and throttle position, it does not take into account air resistance but does account for 
#changing air density at different altitudes in regards to the maximum force produced by the motor
#C.Trippick 11/09/2018

import math
Status = 0
while Status == 0:
    print('Please input the weight of helicopter in KGs')
    WeightInput = input()
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
    MaxRotorForce = mass*AirSpeed
    MaxRotorDisplay = str(MaxRotorForce)
    print('Max rotor force stored as ' + MaxRotorDisplay + ' Newtons')
    print('...')
    #Calculate maximum force possible from main rotor using a form of the F=MA formula
    print('Please input the rate of throttle as a decimal')
    ThrottleInput = input()
    ThrottleCraft = float(ThrottleInput)
    ThrottleDisplay = str(ThrottleCraft)
    print('Rate of Throttle stored as ' + ThrottleInput)
    print('...')
    #Record the input and store it as a floating value
    Status = 1

while Status == 1:
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
    print()
    print('Press y to exit program, press a to calculate for a new angle of attack and press s to start again')
    UserInput1 = input()
    if UserInput1 == 'y':
        Status = 3
        print('ending program')
    if UserInput1 == "a":
        Status = 1
    if UserInput1 == "s":
        Status = 0

#print('Would you like to calculate speed after a fixed period? (y/n)')
#UserInput = input()
#if UserInput == 'y':
#    print('Please enter time at this throttle/angle in seconds')
#    TimeInput = input()
#    Time = int(TimeInput)
#    VerticalSpeed = Time*VerticalAccel
#    VerticalSpeedKmh = ((VerticalSpeed/1000)*60)*60
#    VerticalSpeedKmhString = str(VerticalSpeedKmh)
#    print('The Vertical Speed of the craft after ' + TimeInput + ' Seconds is' + VerticalSpeedKmhString + ' Kmh')

#    HorizontalSpeed = Time*HorizAccel
#    HorizontalSpeedKmh = ((HorizontalSpeed/1000)*60)*60
#    HorizontalSpeedKmhString = str(HorizontalSpeedKmh)
#    print('The Horizontal Speed of the craft after ' + TimeInput + ' Seconds is' + HorizontalSpeedKmhString + ' Kmh')

#else: print('end of program')
