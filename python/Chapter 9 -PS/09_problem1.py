#in file--> poem.txt find if it contains word "Twinkle"
word =  input("Enter the word you wish to search in poem.txt:")
with open("poem.txt") as f:
    data = f.read()
    if word in data:
        print(f"Yes, I have found \"{word}\" in the file")
    else:
        print(f"can't find \"{word}\" in file")