
import pyautogui, time, serial

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
    elif data == 'B':
        pyautogui.press('down')    
        print("B has been detected")
    elif data == 'C':
        pyautogui.press('right')    
        print("C has been detected")
    elif data == 'D':
        pyautogui.press('left')    
        print("D has been detected")
    