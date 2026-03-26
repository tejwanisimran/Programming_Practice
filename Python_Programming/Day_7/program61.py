# Description:  Write a program that accepts array size , target  , elements from the user ,  
#               & returns the frequency of that target element from the array.

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

def CountFrequency(Arr , Size , Target):
    Count = 0

    for i in range(Size):
        if(Arr[i] == Target):
            Count += 1

    return Count

def main():
    Arr = list()
    Length = 0
    Ret = 0
    Target = 0

    print("Enter the size of the list : ",end = "")
    Length = int(input())

    print("Enter the number that you want to search : " , end = "")
    Target = int(input())

    Accept(Arr , Length)
    Display(Arr,Length)

    Ret = CountFrequency(Arr , Length , Target)
    print(f"Frequency of {Target} is : ",Ret)
    

if __name__ == "__main__":
    main()