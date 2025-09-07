'''===taking problem 2 and greeting user with  Hello Before operations:'''

class Calculator:
    @staticmethod
    def greet():
        print("Hello!")

    def __init__(self, num):
        self.num = num
        print(f"square of {num} = {num*num}")
        print(f"cube  of {num} = {pow(num,3)}")
        print(f"square root of {num} = {round(pow(num,0.5),2)}")


Calculator.greet()
number = int(input("Enter the number:"))

Calc1 = Calculator(number)



