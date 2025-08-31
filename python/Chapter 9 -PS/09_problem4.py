'''
a file contais word "donkey" multiple time you have to update 
this word with "#####" by updating the same file
'''

with open("prb4.txt","r") as f: 
    data = f.read()


data = data.replace("Donkey", "#####")

with open("prb4.txt","w") as f:
    f.write(data)


