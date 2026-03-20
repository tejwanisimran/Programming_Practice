# Description : Write a program that accepts number from the user &  
#               check whether that number is prime or not

def CheckPrime(No):
    Flag = True

    for i in range(2 , No//2 , 1):
        if(No % i == 0):
            Flag = False

    return Flag

def main():

    Value = 0
    Ret = False

    print("Enter the number : ")
    Value = int(input())

    Ret = CheckPrime(Value)

    if(Ret == True):
        print("It's an prime number...")
    else:
        print("It's not an prime number...")


if __name__ == "__main__":
    main()