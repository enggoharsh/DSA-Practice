'''====create a class train and write methods like book ticket get status(number of seat)
and get fair of train running under indian railways=====
'''

class Train:
    @staticmethod
    def greet():
        print("<=========WELCOME TO INDIAN RAILWAY=========>")
    @staticmethod
    def BookTicket():
       print("Your Ticket has booked successfully!")
        
    
    def get_Status(self,tL):
        print(f"No of seats left: {tL}")

    def get_Fair(self,fR):
        print(f"Fair for your Journey is: {fR}")


Train.greet()
total_ticket = int(input("Enter the total ticket:"))
while(total_ticket != 0):
    D_2_G = Train()
    fair_Rate  = int(input("Enter the fair rate:"))
    D_2_G.BookTicket()
    total_ticket-=1
    D_2_G.get_Status(total_ticket)
    D_2_G.get_Fair(fair_Rate)
else:
    print("######### Sorry!!! No more seats. #########")

