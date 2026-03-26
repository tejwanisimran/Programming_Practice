# Description : Write a program that accepts array size , elements from the user ,
#               & display the array.

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


def main():
    Arr = list()
    Length = 0

    print("Enter the size of the list : ",end = "")
    Length = int(input())

    Accept(Arr , Length)
    Display(Arr,Length)




if __name__ == "__main__":
    main()