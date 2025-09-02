'''

mine a log file and check whether
 it contains the word "python" or not

'''
with open("file.log","r")as f:
    content = f.read()

if "Python" in content:
    print("YES")
else:
    print("NO")