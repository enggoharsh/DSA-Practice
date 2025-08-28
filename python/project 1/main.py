# create a snake water and gun game: 
'''
snake vs gun = gun will kill the snake; gun won
snake vs water = snake will drink the water; snake won
water vs gun = gun will sink in water; water won

water---> w  |-----| gun---->g |-----| snake----->s |------|

'''

import random

while(1):               #done to use terminal only once to start it
    computer = random.randint(-1,1)                                                                    
    yourStr= input("Enter your entry(eg: s->snake, w->water, g->gun):")
    yourDict= {"s": -1, "w": 0, "g": 1}
    reverseDict = {-1 : "Snake", 0:"Water", 1: "Gun"}
    your = yourDict[yourStr]
    print(f"You have choosen {reverseDict[your]} \nComputer has choosen {reverseDict[computer]}")
    if( computer == your):
        print("Game tied!")
    else:
        if (computer == -1 and your == 0):
            print("you lose!")
        elif(computer == -1 and your == 1):
            print("You won!")

        elif(computer == 1 and your == -1):
            print("You lose!")
        elif(computer == 1 and your == 0):
            print("You Won!")

        elif( computer == 0 and your == -1):
            print("You won!")
        elif(computer == 0 and your == 1):
            print("You Lose")
        else:
            print("Something Went Wrong!")

       