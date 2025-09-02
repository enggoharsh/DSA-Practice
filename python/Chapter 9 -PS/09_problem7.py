'''
check in which line the word "Python" is also
find the line number---->
'''

with open("file.log") as f:
    lines = f.readlines()

for i,line in enumerate(lines,start =1):
    if "Python" in line:
        print(f"\"Python\" is present in line {i}")
        found = True

if not found:
    print("no such word exist.")
