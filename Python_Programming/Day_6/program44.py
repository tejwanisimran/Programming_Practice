'''
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : 1 2 3 4 
             5 6 7 8 
             9 10 11 12 
             13 14 15 16
''' 

def Display(Row , Col):
    i = 0
    j = 0
    No = 1

    for i in range(1 , Row+1 , 1):
        for j in range(1 , Col+1 , 1):
            print(No , "\t" , end = "")
            No = No + 1
        print()



def main():
    Row = 0 
    Col = 0

    print("Enter the number of rows : ",end = "")
    Row = int(input())

    print("Enter the number of columns : ", end = "")
    Col = int(input())
    
    Display(Row,Col)

if __name__ == "__main__":
    main()
    