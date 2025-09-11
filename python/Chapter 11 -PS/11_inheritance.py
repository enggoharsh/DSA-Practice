'''=======================inheritance======================'''
class Employee:
    company = "H&M"
    revenue  = 5715475120



class Programmer(Employee):
    def __init__(self):
        print(self.revenue)

harsh  = Programmer()