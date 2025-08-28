# write a function to print first n lines of following pattern: 

'''for n=3
***
**
*      '''

def patternP(n):
    for i in range(n):
        print("*"*(n-i),end="")
        print()
       


n = int(input("enter the value of n:"))
patternP(n)