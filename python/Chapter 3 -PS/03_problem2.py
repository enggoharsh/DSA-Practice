# date="15/08/2025"
# name="Harsh"
# letter=f'''Dear:{name }
# You are selected!
# {date }'''
# print(letter)




# -------------->m2
letter='''Dear,
<|name|> 
You are selected!
<|Date|> '''
print(letter.replace("<|name|>","Harsh").replace("<|Date|>","15-Aug-2025"))