# Description : Write a program to check whether the number is even or odd.

def CheckEven(No):
    Flag = False

    if(No % 2 == 0):
        Flag = True

    return Flag

def main():

    Value = int(input("Enter the number : "))

    Ret = CheckEven(Value)

    if(Ret == True):
        print("It's an even number...")
    else:
        print("It's an odd number...")
    

if __name__ == "__main__":
    main()