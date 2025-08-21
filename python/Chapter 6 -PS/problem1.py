#find the greatest number entered by the user

num1 = int(input("Enter the number:"))
num2 = int(input("Enter the number:"))
num3 = int(input("Enter the number:"))
num4 = int(input("Enter the number:"))

if(num1>=num2 and num1>=num3 and num1>=num4):
    print("num1 is the greatest number")
elif(num2>=num1 and num2>=num3 and num2>=num4):
    print("num2 is greatest number")
elif(num3>=num2 and num3>=num1 and num3>=num4):
    print("num3 is greatest number")
elif(num4>=num2 and num4>=num3 and num4>=num1):
    print("num4 is greatest")
else:
    print("unexpected result")


    # improvement: we can even use max() function built in python