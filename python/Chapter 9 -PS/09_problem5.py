'''
repeat the program 4 for  list of  such word like "Donkey" etc to be censored
    with "#####"

'''

censored = ["Donkey", "ganda", "bevkuf","dirty"]

with open("problem4.txt","r") as f:
    content =  f.read()

for word in censored:
    if word in content:
        content = content.replace(word, "######")



with open("problem4.txt","w") as f:
        f.write(content)

