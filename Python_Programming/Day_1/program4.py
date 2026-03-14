# Description : Accpet the age from the user 

'''
/*Start 
     Accept the age from user
        If age is less than 5 thn there will be no ticket
        If age is in between 5 to 18 then the ticket will be of price 700
        If age is in between 18 to 50 then the ticket will be of price 999
        If age is greater than 50 then the ticket will be of price 500
*/
'''

def CalculateTicket(Age):
    
    Price = 0

    if(Age <= 5):
       Price = 0
    
    if(Age > 5 and Age <= 18):
        Price = 700
    elif(Age > 18 and Age <= 50):
        Price = 999
    elif(Age > 50):
        Price = 500
    
    return Price
            
def main():
    Age = int(input("Enter your age : "))

    Price = CalculateTicket(Age)

    print("Price of the ticket is : ",Price)

if __name__ == "__main__":
    main()