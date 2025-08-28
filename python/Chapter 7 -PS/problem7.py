# write a program to print multiplication table of n using for loops in reverse order:


n = int(input("Enter the the table you want to print:"))
for i in range(10,0,-1):
    print(f"{n} x {i} = {n*i}")