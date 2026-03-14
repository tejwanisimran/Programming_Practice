# Description : Take the percentage as the input from the user and display the class
'''
Start
    Accept the percentage from the user
      If the percentage is less than 0 and greater than 100 
        display as invalid input
      If percentage is greater than 0 and less than 35 
        display as fail
      If percentage is greater than 35 and less than 50
        display as pass class
      If percentage is greater than 50 and less than 60
        display as second class
      If percentage is greater than 60 and less than 70
        display as first class
      If percentage is greater than 70 and less than 100
        display as first class with distinction          

'''

def DisplayClass(Percentage):

    if(Percentage <= 0.0 or Percentage >= 100.0):
        print("Invalid Input...")
    

    if(Percentage > 0.0 and Percentage <= 35.0):
        print("Fail")
    elif(Percentage > 35.0 and Percentage <= 50.0):
        print("Pass Class")
    elif(Percentage > 50.0 and Percentage <= 60.0):
        print("Second Class")
    elif(Percentage > 60.0 and Percentage <= 70.0):
        print("First Class")
    elif(Percentage > 70.0 and Percentage <= 100.0):
        print("First Class With Distinction")
            
def main():
    Percentage = float(input("Enter your percentage : "))

    DisplayClass(Percentage)


if __name__ == "__main__":
    main()