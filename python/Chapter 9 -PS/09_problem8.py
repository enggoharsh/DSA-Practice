'''
write a program to make copy of a file "this.txt"

'''

with open("this.txt") as f:
    content = f.read()

with open("this_copy.txt","w") as f:
    f.write(content)


   # review: done in first go