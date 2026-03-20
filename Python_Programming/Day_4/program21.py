# Description : Write a program tha accepts number from the user & count the 
#               frequency of the digit

def CountFrequency(No , Target):
    Digit = 0
    Count = 0

    while(No != 0):
        Digit = No % 10
        if(Digit == Target):
            Count += 1
        No = No // 10

    return Count

def main():

    Value = 0
    Ret = 0
    Target = 0

    print("Enter the number : ")
    Value = int(input())

    print("Enter the target : ")
    Target = int(input())

    Ret = CountFrequency(Value , Target)

    print("Frequency is : ",Ret)

if __name__ == "__main__":
    main()