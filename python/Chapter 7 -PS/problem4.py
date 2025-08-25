# write a program to find sum of first n natural numbers:

n= int (input("Enter the number upto which you want to print sum:"))
i=1
sum=0
while(i<=n):
    sum = sum+i
    i+=1

print(f"sum of first {n} natural number is: {sum}")