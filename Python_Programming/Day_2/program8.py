# Description : Write a program that accepts number from the user 
#               & print Hello that number of times
def Display(No):

    for i in range(1,No+1,1):
        print( "Hello")            


def main():
    Value = int(input("Enter the number : "))

    Display(Value)

if __name__ == "__main__":
    main()