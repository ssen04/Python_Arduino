import serial
import time

ser = serial.Serial("/dev/ttyUSB0", 115200)

while True:
    ABC = 1
    time.sleep(0.851)
    if ABC > 0:
        print("Sent")
        ser.write(b'1')
       
    else:
        print("Waiting")
        ser.write(b'2')
