import math

Gravity = 3.2
print('Please input max rocket thrust in Mega Newtons')
ThrustInput = input()
ThrustRaw = float(ThrustInput)
ThrustStandardised = ThrustRaw*1000000

print('Please input length of engine burn in seconds')
TimeInput = input()
Time = int(TimeInput)

print('Please input mass of craft in metric tonnes')
MassInput = input()
MassRaw = float(MassInput)
MassStandardised = MassRaw*1000
print('...')

print('Commencing Calculations')
print('...')
Acceleration = ThrustStandardised/MassStandardised
AccelerationString = str(Acceleration)
if Acceleration < Gravity:
    
    print('Your craft did not acheive enough velocity to takeoff')
    print('craft acheived max acceleration of ' + AccelerationString + 'M/S^2')
else:
    MaxVelocity = (Acceleration - Gravity)*Time
    MaxVelocityString = str(MaxVelocity)
    FlightTime = (MaxVelocity/Gravity) 
    FlightTimeString = str(FlightTime)
    print('The crafts maximum velocity is ' + MaxVelocityString + ' M/S')
    print('The crafts total flight time is ' + FlightTimeString + ' Seconds')
    print('The crafts maximum acceleration is ' + AccelerationString + ' M/S^2')
    print('press e to exit')
    UserInput = input()
    if UserInput == 'e': print('exiting program')
