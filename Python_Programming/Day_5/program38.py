'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output :1 * 3 * 
            1 * 3 *
            1 * 3 * 
            1 * 3 *
'''
def Display(Row,Col):

    for i in range(1 , Row+1 , 1):
        for j in range(1 , Col+1 , 1):
            if(j % 2 != 0):
                print(j,"\t" , end="")
            else:
                print("*\t" , end="")
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