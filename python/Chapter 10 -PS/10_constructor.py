# =======constructor in python========
class Students:
    branch = "ECE"
    sem = "V"

    def __init__(self,language,salary):               #dunder method which is automatically called$$$
        self.salary = salary
        self.language = language
        print("You have created a constructor$$$$")
        print(f"Salary = {salary}")
        print(f"language = {language}")


Harsh = Students("Python", 10000000)

