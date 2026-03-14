# Description : Write a program to calculate the percentage .

def CalculatePercentage(Obtained , Total):
    Percentage = 0.0

    Percentage = Obtained/Total *100

    return Percentage


def main():
    Obtained = int(input("Enter your obtained marks : "))
    Total = int(input("Enter your total marks : "))

    Percentage = CalculatePercentage(Obtained , Total)

    print("Total percentage is : ",Percentage)

if __name__ == "__main__":
    main()