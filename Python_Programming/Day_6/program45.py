'''
    Description : Write a program that accepts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : * * * *
             0 0 0 0 
             0 0 0 0
             * * * * 
''' 

def Display(Row , Col):
    i = 0
    j = 0

    for i in range(1 , Row+1 , 1):
        for j in range(1 , Col+1 , 1):
            if((i == 1) or (i == Row)):
                print("*\t" , end = "")
            else :
                print("0\t" , end = "") 
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
    