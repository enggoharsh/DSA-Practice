'''=======================inheritance======================'''
class Employee:
    company = "H&M"
    revenue  = 5715475120



class Programmer:           # inheriting values from base class Employee::::::::
    def __init__(self):
        print(self.revenue)


# multiple inheritance =========>
class PythonDev(Programmer,Employee):
    a = 3



harsh = PythonDev()
print(harsh.company)