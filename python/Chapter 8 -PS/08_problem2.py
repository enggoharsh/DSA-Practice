# celsius to fahrenheit :

def C2F(celsius_value):
    tempinF = (celsius_value * (9/5) + 32)
    return tempinF

celsius = int(input("Enter the temperature in celsius:"))
print(f"The temperature in fahrenheit: {C2F(celsius)}")