#remove  a given word from a list and strip it at the same time: 

def toolList(myList, word,c):
     if word in myList:
        myList.remove(word)

     for i in range(len(myList)):
          myList[i] = myList[i].strip(c)
          
     return myList


listEx = []
for i in range (5):
    num = input("Enter the value of element:")
    listEx.append(num)

wordRemove = input("Enter the word you want to remove: ")
wordStrip = input("Enter the word you want to strip:")
print(f"list after removal of {wordRemove}---> {toolList(listEx, wordRemove,wordStrip)}")
