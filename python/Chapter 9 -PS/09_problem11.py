''''

write a program to rename a file using python
and give the filename as "renamed_by_python.txt"

'''

import os
filename = input("Enter the filename:")
filename_updated = input("Enter the new filename:")
if os.path.exists(filename):
    os.rename(filename,filename_updated)
else:
    print("No such file exist")

    #done in one go

