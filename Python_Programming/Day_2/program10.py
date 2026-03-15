# Description : Write a program that accepts number from the user 
#               & print from that number in reverse order till 1.
def Display(No):

    for i in range(No,0,-1):
        print( i , "\t" , end="")            


def main():
    Value = int(input("Enter the number : "))

    Display(Value)

if __name__ == "__main__":
    main()