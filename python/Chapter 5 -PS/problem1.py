#   ----->here we have to create a dictionary of the translation from hindi to english
# and give user option to look it up

words = {
    "khana" : "eat",
    "sona" : "sleep",                  #hindi(key): english(value)
    "chalna"  : "run" ,
    "harsh" : "happiness"
}
word = input("Enter the word you want engish meaning of:")
print(words[word])