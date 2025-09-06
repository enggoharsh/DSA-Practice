#write a program to check whether name is present in list or not

nameList  = ["harsh", "anupam", "om", "suraj", "ark","ashish"]

name = input("Enter the name:")
if(name in nameList):
    print("oh yeah baby!")
else:
    print("outsider")