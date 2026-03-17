# Description : Write a program that accepts number from the user & returns 
#               summation of all numbers till that numbers.

def Summation(No):
    Sum = 0
    
    for i in range(1 , No+1 , 1):
        Sum +=i

    return Sum

def main():

    Value = int(input("Enter the number : "))

    Ret = Summation(Value)

    print("Summation is : ",Ret)

if __name__ == "__main__":
    main()