'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4 #
    Output : #  # # #
'''
def Display(No , ch):

    for i in range(1,No+1,1):
        print(ch , "\t" , end = "")


def main():
    Value = 0
    ch = None

    print("Enter the frequency : ",end = "")
    Value = int(input())

    print("Enter the character that you want to print : ",end = "")
    ch = input()

    Display(Value , ch)

if __name__ == "__main__":
    main()