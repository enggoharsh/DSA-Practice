'''=====create an object ""Calculator" capable of calculating square, cube and square root of a num ===='''


class Calculator:

    def __init__(self, num):
        self.num = num
        print(f"square of {num} = {num*num}")
        print(f"cube  of {num} = {pow(num,3)}")
        print(f"square root of {num} = {round(pow(num,(1/2)),2)}")



number = int(input("Enter the number:"))
Calc1 = Calculator(number)

