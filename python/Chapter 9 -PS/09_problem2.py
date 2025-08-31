'''create a function game() which 
let user play the game and return score as integer.
You need to read a file "Hi-score.txt" which is either black or
contains previous high score.
update the contents of file whenever game function beat high score.'''
import random 
import os

def game(n,c):
    if (n==c):
        return 1
    else:
        return 0

chance = int(input("Enter the chances:"))
score = 0
while(chance != 0):
    user = int(input("Enter the number: "))
    computer = random.randint(1,2)
    print("Computer guess is:",computer)
    score += game(user, computer)
    chance = chance-1

if os.path.exists("Hi-Score.txt"):
    with open("Hi-Score.txt") as f:
        content = f.read()
        prev_score = int(content) if content else 0
else:
    prev_score = 0
    

if (prev_score < score):
    with open("Hi-Score.txt","w") as f:
        f.write(str(score))
        print("New score updated,see in the file \"Hi-Score.txt\"")
else:
    print("Your Sccore is:",score)
    print("Final Score is less than High Score")





    