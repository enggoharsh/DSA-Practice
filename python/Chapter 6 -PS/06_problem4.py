# write a program to read whether a given username contains 10 character or not

userName  = input("Enter your username:")


if(len(userName) >= 10):
    print("contains atleast 10 characters")
else:
    print("contains less than 10 characters")