# Description:  Write a program that accepts array size , target  , elements from the user ,  
#               & search  whether that element is present in that array or not .

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

def FindElement(Arr , Size , Target):
    Flag = False

    for i in range(Size):
        if(Arr[i] == Target):
            Flag  = True

    return Flag

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

    Ret = FindElement(Arr , Length , Target)
    if(Ret == True):
        print(f"{Target} is present...")
    else : 
        print(f"{Target} is not present...")





if __name__ == "__main__":
    main()