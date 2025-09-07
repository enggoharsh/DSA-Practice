# ======PROBLEM: create a class "Programmer" to store data of several employees working in MICROSOFT======

class Programmer:
    company =  "Microsoft"
    employee = "programmer"

    def __init__(self,id, salary):
        self.salary = salary
        self.id = id
        print(f"salary of employee with id: {id} is {salary}")

id = int(input("Enter the id of employee:"))
salary = input("Enter the salary of employee:")

harsh = Programmer(id,salary)
aryan = Programmer(id,salary)