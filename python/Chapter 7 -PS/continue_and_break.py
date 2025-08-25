#continue and break in python:

# --->prnting only odd number upto 10
# for i in range(11):
#     if(i % 2 ==0):
#         continue
#     else:
#          print(i)

# using break statement: if 3 arrived break the for loop ---->
for i in range(11):
    if(i==3):
        break
    else:
        print(f"{i} \n")