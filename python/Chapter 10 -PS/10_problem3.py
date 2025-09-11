'''=====create a class and create a class attribute 'a' create a object directly from it
and assign directly object.a = 0. will class attribute changes?======'''

class Check_on_Attributes:
    a = 1


check_object = Check_on_Attributes()
print(check_object.a)
check_object.a = 0
print(check_object.a)


#========attribute will not change but object attribute has more preference over class attribute======