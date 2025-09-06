#greet person in list l= ["Harry","Soham","Sachin","Rahul"] whose name starts with S

l = ["Harry","Soham","Sachin","Rahul"]



# for i in l:
#     if("S" in i):
#         print(f"Namaste! {i}")
#     else:
#         continue

# -----> attempting using whle loop now
i=0
while(i<len(l)):
    if("S" in l[i]):
        print(f"Namaste! {l[i]}")
   
    i +=1