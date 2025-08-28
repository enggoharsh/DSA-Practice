#convert inches to cm: using functions------->

def I2C(inchVal):
    return 2.54 * inchVal



inch = int(input("Enter the value in inches:"))
print(f"Equivalent value of {inch} inches in cm = {round(I2C(inch),2)}")