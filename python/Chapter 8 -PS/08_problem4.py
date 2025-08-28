# write a recursive function to print sum of n natural numbers: 

def sumN (num):
    if (num==1):
        return 1
    add   =  num + sumN(num-1)
    return add


num =  int(input("Enter the number:"))
print(f"sum of first n natural numbers = {sumN(num)}")

#    self note:  always give a base condition to recursive functions

