import os

# Specify the directory you want to list
directory_path = "C:/"  # Change this path

# Check if the directory exists
if os.path.exists(directory_path) and os.path.isdir(directory_path):
    print(f"Contents of directory: {directory_path}")
    for item in os.listdir(directory_path):
        print(item)
else:
    print(f"Directory does not exist: {directory_path}")
