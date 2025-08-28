# write a program using functions to find greatest of three numbers: 

def greatestNum (a, b,c):
    if (a>=b and a>=c):
        return a
    elif(b>=a and b>=c):
        return b
    else:
        return c
    
num1 = int(input("Enter the number:"))
num2 = int(input("Enter the number:"))
num3 = int(input("Enter the number:"))
print(f"the greatest of three number is : {greatestNum(num1,num2,num3)}")