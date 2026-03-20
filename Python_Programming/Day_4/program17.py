# Description : Write a program that accepts number from the user & returns 
#               its sum of factors & non-factors

def SumFactorsNonFactors(No):
    Sum1 = 0
    Sum2 = 0

    for i in range(1 , No+1 , 1):
        if(No % i == 0):
            Sum1 = Sum1 + i
        else:
            Sum2 = Sum2 + i
        
    print("Summation of factors is : ",Sum1)
    print("Summation of non-factors is : ",Sum2)


def main():

    Value = 0

    print("Enter the number : ")
    Value = int(input())

    SumFactorsNonFactors(Value)

if __name__ == "__main__":
    main()