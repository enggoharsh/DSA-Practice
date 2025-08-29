''' if you want some data to persists/save with you 
you should use file '''


# ----------------->read a file

# f = open("file.txt","r")            #--mode open("filename.exte", "mode")
# data = f.read()
# print(data)
# f.close()

# ----------------------->write a file

# st = input("Enter your content:")
# f = open("myFile.txt","w")
# f.write(st)
# f.close()

# ------------------> reading a file line by line:
# f= open("file.txt","w")
# line = f.readline()
# while(line != ""):
#     print(f"{line}",end="")
#     line = f.readline()
# f.close()

# ------------------------> appending and more modes

# str = input("Enter what you want to append in a line:")
# f= open("file.txt","a")
# f.write(str)
# f.close()

# using with function in file where we dont have explicitly read or write a function: 

with open("file.txt") as f:
    print(f.read())

# -------> this is how we can use with in place of normal:
# f= open("file.txt")
# print(f.read())
# f.close()




