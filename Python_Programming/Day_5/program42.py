'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4  4
    Output : a a a a
             b b b b 
             c c c c
             d d d d
'''
def Display(Row,Col):

    ch = 'a'

    for i in range(1 , Row+1 , 1):
        for j in range(1 , Col+1 , 1):
            print(ch,"\t" , end="")
        ch = chr(ord(ch) + 1)
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