'''
    Description : Write a program that accprts frequency & prints
                  the below pattern : 
    Input : 4
    Output : 4 3 2 1 0
'''
def Display(No):

    for i in range(No,-1 ,-1):
        print(i , "\t" , end = "")


def main():
    Value = 0

    print("Enter the frequency : ",end = "")
    Value = int(input())

    Display(Value)

if __name__ == "__main__":
    main()