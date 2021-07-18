
import pyautogui, sys, time, serial

port = 'COM5'   
baud = 9600

NanoSerial = serial.Serial(port, baud)
time.sleep(1)

print("MacroKeyPad:", port, baud)

while True:
    data = str(NanoSerial.readline())[2]
    if data == 'A':
        pyautogui.press('up')    
        print("A has been detected")