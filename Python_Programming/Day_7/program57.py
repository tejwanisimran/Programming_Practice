# Description: Write a program that accepts array size , elements from the user , 
#              & count odd elements from the array.

def Accept(Arr , Size):
    Value = 0

    print("Enter the elements : ")
    for i in range(Size):
      Value = int(input())
      Arr.append(Value) 

def Display(Arr , Size):

    print("Elements are : ")
    for i in range(Size):
        print(Arr[i] , "\t" , end = "")
    
    print("\n")

def CountOdd(Arr , Size):

    Count = 0

    for i in range(Size):
        if(Arr[i] % 2 != 0):
            Count += 1

    return Count


def main():
    Arr = list()
    Length = 0
    Ret = 0

    print("Enter the size of the list : ",end = "")
    Length = int(input())

    Accept(Arr , Length)
    Display(Arr,Length)

    Ret = CountOdd(Arr , Length)
    print("Number of odd elements are : ",Ret)




if __name__ == "__main__":
    main()