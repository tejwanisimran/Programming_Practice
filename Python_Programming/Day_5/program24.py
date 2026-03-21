'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : * * * *
'''
def Display(No):

    for i in range(1,No+1 , 1):
        print("*\t" , end = "")


def main():
    Value = 0

    print("Enter the frequency : ",end = "")
    Value = int(input())

    Display(Value)

if __name__ == "__main__":
    main()