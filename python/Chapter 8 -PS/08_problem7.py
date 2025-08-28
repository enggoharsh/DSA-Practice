#  write a fuction to print multiplication table of any entered number--->

def table(n):
    for i in range(1,11):
        print(f"{num} x {i} = {num*i}")

num = int(input("Enter the number whose multiplication table you want to print:"))
table(num)