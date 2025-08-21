physics  = int(input("Enter the marks in physics:"))
chemistry = int(input("Enter the marks in chemistry:"))
maths = int(input("Enter the marks in mathematics:"))

totalPer = ((physics + chemistry + maths) * 100)/300

if(totalPer >= 40 and physics >= 33 and chemistry >= 33 and maths >= 33):
    print("student is passed")
else: 
    print("student is failed")