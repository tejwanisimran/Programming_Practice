
# Description : Write a program that accepts number from the user & returns 
#               factorial of the given number.

def Factorial(No):
    Fact = 1
    
    for i in range(1 , No+1 , 1):
        Fact = Fact * i

    return Fact

def main():

    Value = int(input("Enter the number : "))

    Ret = Factorial(Value)

    print("Factorial is : ",Ret)

if __name__ == "__main__":
    main()