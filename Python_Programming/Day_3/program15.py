# Description : Write a program to check whether the number is perfect number or not.

def Factorial(No):
    Sum = 0
    
    for i in range(1 , (No//2)+1 , 1):
        if(No % i == 0):
            Sum = Sum + i

    return (Sum == No)

def main():

    Value = int(input("Enter the number : "))

    Ret = Factorial(Value)

    if(Ret == True):
        print("It's an perfect number...")
    else:
        print("It's not an perfect number...")

if __name__ == "__main__":
    main()