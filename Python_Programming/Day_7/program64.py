# Description:  Write a program that accepts array size , elements from the user ,  
#               & returns the maximum & minimum element from the array .

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

def MaxMin(Arr , Size):
    Min = 0
    Max = 0

    Min = Arr[0]
    Max = Arr[0]

    for i in range(Size):
        if(Arr[i] < Min):
            Min = Arr[i]
        if(Arr[i] > Max):
            Max = Arr[i]

    print("Minimum element is : ",Min)
    print("Maximum element is : ",Max)


def main():
    Arr = list()
    Length = 0
    Ret = 0

    print("Enter the size of the list : ",end = "")
    Length = int(input())

    Accept(Arr , Length)
    Display(Arr,Length)

    MaxMin(Arr , Length)    

if __name__ == "__main__":
    main()