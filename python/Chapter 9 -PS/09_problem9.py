'''
write a program to check if content of two file
is identical & matches it or not

'''
with open("this.txt","r") as f:
    content_f1 = f.read()


with open("this_copy.txt","r") as f:
    content_f2 = f.read()

if content_f1 == content_f2:
    print("Yes these are exact copies")
else: 
    print("Not a copy")

    #review: done in one go