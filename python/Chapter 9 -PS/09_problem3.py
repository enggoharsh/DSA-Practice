'''

 write a program to write table from 2 to 20 and store them in separate file
 create a folder of these files for 13 year old 

 '''

import os

os.makedirs("Tables",exist_ok=True )       #creating a folder named ----->Tables
def table(num):
    filename = os.path.join("Tables",f"Table_{num}.txt")               #creating a dyanamic file name and adding them in tables folder
    with open(filename,"w") as f:
        f.write("\n")
        f.write(f"Table of {num}:\n\n")
        for i in range (1,11):
            st  = num*i
            f.write(f"{num} x {i} = {st}\n")

for i in range (2,21):
    table(i)
print("Printed table successfully!!!")



"""harry's sol^n: 

def generateTable(n):
    table = ""
    for i in range(1,11):
        table += f"{n} x {i} = {n*i}\n"
    
    with open ("table2.txt","w") as f:
        f.write(table)



for i in range(2,21):
    generateTable(i)   
    
    """