# Description : Write a program tha accepts number from the user & display its digits

def DisplayDigits(No):
    Digit = 0

    while(No != 0):
        Digit = No % 10
        print(Digit , "\t" , end = "")
        No = No // 10

def main():

    Value = 0

    print("Enter the number : ")
    Value = int(input())

    DisplayDigits(Value)

if __name__ == "__main__":
    main()