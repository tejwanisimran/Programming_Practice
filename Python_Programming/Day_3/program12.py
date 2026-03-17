# Description : Write a program to check whether the number is number is 
#               divisible by 3 & 5 or not.

def CheckEven(No):
    Flag = False

    if((No % 3 == 0) and (No % 5 == 0)):
        Flag = True

    return Flag

def main():

    Value = int(input("Enter the number : "))

    Ret = CheckEven(Value)

    if(Ret == True):
        print("It's divisible by 3 & 5...")
    else:
        print("It's not divisible by 3 & 5...")
    

if __name__ == "__main__":
    main()