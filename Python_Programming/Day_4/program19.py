# Description : Write a program tha accepts number from the user & count its digits

def CountDigits(No):
    Digit = 0
    Count = 0

    while(No != 0):
        Digit = No % 10
        Count += 1
        No = No // 10

    return Count

def main():

    Value = 0
    Ret = 0

    print("Enter the number : ")
    Value = int(input())

    Ret = CountDigits(Value)

    print("Number of digits are : ",Ret)

if __name__ == "__main__":
    main()