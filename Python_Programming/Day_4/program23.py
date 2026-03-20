# Description : Write a program tha accepts number from the user & reverse that 
#               number

def ReverseNumber(No):
    Digit = 0
    Rev = 0

    while(No != 0):
        Digit = No % 10
        Rev = Rev * 10 + Digit
        No = No // 10

    return Rev

def main():

    Value = 0
    Ret = 0

    print("Enter the number : ")
    Value = int(input())

    Ret = ReverseNumber(Value)

    print("Rversed number is : ",Ret)

if __name__ == "__main__":
    main()