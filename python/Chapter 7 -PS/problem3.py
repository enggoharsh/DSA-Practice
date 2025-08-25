#program to find if given number is prime or not:

num = int (input("Enter your number:"))

for i in range (2,num):
    if(num%i==0):
        print(f"{num} is not a prime number")
        break
else:
    print(f"{num} is a prime number")