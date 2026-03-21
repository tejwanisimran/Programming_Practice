'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    IInput : 4  4
    Output : * * * *
             # # # #
             * * * * 
             # # # # 
'''
def Display(Row,Col):

    for i in range(1 , Row+1 , 1):
        for j in range(1 , Col+1 , 1):
            if(i % 2 != 0):
                print("*\t" , end="")
            else:
                print("#\t" , end="")
        print('\n')



def main():
    Row = 0
    Col = 0

    print("Enter the number of rows : ",end = "")
    Row = int(input())

    print("Enter the number of columns : ",end = "")
    Col = int(input())

    Display(Row , Col)

if __name__ == "__main__":
    main()