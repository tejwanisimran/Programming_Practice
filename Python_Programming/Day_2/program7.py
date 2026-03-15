# Description : Write a program that accepts number from the user 
#               & print numbers till that given number
def Display(No):

    for i in range(1,No+1,1):
        print(i, "\t" ,end = "")            


def main():
    Value = int(input("Enter the number : "))

    Display(Value)

if __name__ == "__main__":
    main()