# def average():
#     a= int(input("Enter the first number:"))
#     b = int(input("Enter the second number:"))
#     c = int(input("Enter the third number:"))

#     avg = (a+b+c)/3
#     print(avg)

# average()

# ------------->2

# def sum(a, b):                                           #func definition
#     c=a+b
#     print(f"sum of  the two number is {c}")

# a = int(input("Enter a number: "))
# b =  int(input("Enter other number:"))
# sum(a,b)                                   #func caLL

# ---------------->3
# def greet(name, ending):
#     print("Good Day! "+ name)
#     print(ending)

# greet("Harsh", "Thank you")
 

# --------->Default arguments: 

# def fullName(name, title= "Mishra"):
#     print(f"{name} { title}")

# Name = input("Enter your name: ")
# fullName(Name)

# --------------->recursion: 

# factorial of a number using recursion
def factorial(n):
    if (n==0 or n==1):
        return 1
    return n* factorial(n-1)

num  = int(input("Enter the number:"))
print(f"Factorial of the number is: {factorial(num)}")