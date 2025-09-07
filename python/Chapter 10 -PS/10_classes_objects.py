'''
=====classes and objects=====
'''
class programmer():          # class is been created
    branch = "ECE"
    # university ="SMVDU"        ------> class attributes

    def getInfo(self):
        print(f"{self.salary} is salary of {self.name} and his favourite language is {self.lan}")

harsh = programmer()  
harsh .salary = 120000000
harsh.lan = "C++"   
harsh.name= "HARSH"     #two objects harsh and aryan made out from class
# harsh.name = "Harsh"           --->instance(object) attributes        
aryan = programmer()
harsh.getInfo()


# Notes: 

#class attributes: attributes which belongs to a particular class
#instance(object) attributes: attributes which belongs to a particular instance(object)

# if  we dont need to use any object property in a method then we mark it as 
# staticmethod(@staticmethod) 




