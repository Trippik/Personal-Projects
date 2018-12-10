#Import ability to passthrough commands to OS
import os
#Inport timing functions
import time
#Import date and time functions
import datetime

#Locations of files to be backed-up
backup_origin_1 = "\\\192.168.0.22\CamShare"
backup_origin_2 = "\\\192.168.0.22\MediaShare"
backup_origin_3 = "\\\192.168.0.22\SoftwareShare"

#Location to save back-up's
backup_target_1 = "\\\BABBAGE\Backup\CamShare"
backup_target_2 = "\\\BABBAGE\Backup\MediaShare"
backup_target_3 = "\\\BABBAGE\Backup\SoftwareShare"

#Set a fixed sync delay of 1 min
sync_delay = 1

#Function that copies all files from orgin location, that are newer than those currently in target location, to target location on Windows systems
def clone_files_windows (origin_1, target_1, origin_2, target_2, orgin_3, target_3):
    loop = True
    counter = 3
    while counter == 3:
        print("**********************************************")
        print("Backing up " + origin_1 + " to " + target_1)
        print("Current time: " + str(datetime.datetime.now()))
        os.system("xcopy /y " + origin_1 + " " + target_1 + " /d")
        wait = (sync_delay*60)
        print("Waiting " + str(sync_delay) + " mins")
        counter = counter - 1
        print()
        print()
        time.sleep(wait)
        
    while counter == 2:
        print("**********************************************")
        print("Backing up " + origin_2 + " to " + target_2)
        print("Current time: " + str(datetime.datetime.now()))
        os.system("xcopy /y " + origin_2 + " " + target_2 + " /d")
        wait = (sync_delay*60)
        print("Waiting " + str(sync_delay) + " mins")
        counter = counter - 1
        print()
        print()
        time.sleep(wait)

    while counter == 1:
        print("**********************************************")
        print("Backing up " + origin_3 + " to " + target_3)
        print("Current time: " + str(datetime.datetime.now()))
        os.system("xcopy /y " + origin_3 + " " + target_3 + " /d")
        wait = (sync_delay*60)
        print("Waiting " + str(sync_delay) + " mins until next sync")
        counter = counter - 1
        print()
        print()
        time.sleep(wait)
            
#Script to capture user input and run correct function
print("****************** SETUP ********************")
print("*********************************************")
print("By defualt this program will clone the following shares from HAWKING to BABBAGE:")
print("- CamShare")
print("- MediaShare")
print("- SoftwareShare")
print()
print("Running on a Windows system")
print("**********************************************")
print()
print()
print("******************* LOGS *********************")
clone_files_windows(backup_origin_1, backup_target_1, backup_origin_2, backup_target_2, backup_origin_3, backup_target_3)
