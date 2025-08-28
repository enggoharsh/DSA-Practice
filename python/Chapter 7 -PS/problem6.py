'''print the pattern: *
                  ***
                 *****
for n=3


'''
n= int(input("Enter the number of rows :"))
# for i in range(1,n+1):
#     print(" "*(n-i),end="")
#     print("*"*(2*i-1),end = "")
#     print("")

'''
----------> Problem 2: 
pattern: *
         **
         ***
        
'''

# for i in range(1,n+1):
#     print("*"*i,end="")
#     print("")

'''
-------->problem : 3

pattern:    ***
            * *
            ***

'''
for i in range(1,n+1):
    if(i==1 or i==n):
        print("*"*n, end="")
        print("")
    else:
        print("*", end="")
        print(" "*(n-2),end = "")
        print("*")
    