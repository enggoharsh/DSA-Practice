# detect spam messages like : "Make alot of money", "buy now",  "subscribe this", "like this"

# METHOD 1: ---------------------->

# text = input("Enter the text:")


# if(text == "Make alot of money" or text ==  "buy now" or text == "subscribe this" or text == "like this"):
#     print("spam detected")
# else:
#     print("no spam detected")

    # METHOD 2: -------------------->
p1 = "Make alot of money"
p2 = "buy now"
p3 = "subscribe now"
p4 = "like this" 

message = input("Enter the message: ")

if((p1 in message) or (p2 in message) or (p3 in message) or (p4 in message)):
    print("spam detected")
else:
    print("no spam detected, chill bro")

    #is detecting spam only for full lines
    