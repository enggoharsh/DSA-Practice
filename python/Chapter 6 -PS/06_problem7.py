# write a program to find if a given post is talking about Harry or not

post = '''This is Code with Harry Youtube channel where we talk about coding,
 computer science and logic building'''

keyWord  = input("Enter the keyword:")

if(keyWord in post):
    print("This post is talking about \"Harry\"")
else:
    print("No this post isn't talking about \"Harry\"")