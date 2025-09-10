# ======PROBLEM: create a class "Programmer" to store data of several employees working in MICROSOFT======

class Programmer:
    company =  "Microsoft"
    employee = "programmer"

    def __init__(self,id, salary):
        self.salary = salary
        self.id = id
        print(f"Employee working in {self.company} with id: {id} paid salary of Rs. {salary}")

salary = []
id = []
for i in range(1,6):
    id_entry = int(input("Enter the id of employee:"))
    id.append(id_entry)

    salary_entry = input("Enter the salary of employee:")
    salary.append(salary_entry)

e1 = Programmer(id[0],salary[0])
e2 = Programmer(id[1],salary[1])
e3 = Programmer(id[2],salary[2])
e4 = Programmer(id[3],salary[3])
e5 = Programmer(id[4],salary[4])