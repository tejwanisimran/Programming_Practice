# Description : Write a program tha accepts number from the user & count its 
#               even digits

def CountEvenDigits(No):
    Digit = 0
    CountEven = 0

    while(No != 0):
        Digit = No % 10
        if(Digit % 2 == 0):
            CountEven += 1
        No = No // 10

    return CountEven

def main():

    Value = 0
    Ret = 0

    print("Enter the number : ")
    Value = int(input())

    Ret = CountEvenDigits(Value)

    print("Number of digits are : ",Ret)

if __name__ == "__main__":
    main()