def displayScreen():
    print("|---------------------HI!Welcome to my COMPANY---------------------------------------------|")
    print("{:<12} {:<13} {:<15} {:<33}".format("Package_ID", "Package_Name", "Package_Price", "Additional_minutes_Price"))
    print("{:<12} {:<13} {:<15} {:<33}".format("Package 1", "A", "$39.99 per month", "$0.45 each"))
    print("{:<12} {:<13} {:<15} {:<33}".format("Package 2", "B", "$59.99 per month", "$0.40 each"))
    print("{:<12} {:<13} {:<15} {:<33}".format("Package 3", "C", "$69.99 per month", "No cost"))
    print("|------------------------------------------------------------------------------------------|")

def getPackage():
    package = input("Enter your Package (A, B, or C): ")
    return package     
   
def getMinutes():
    minutes = int(input("Enter the number of minutes used: "))
    return minutes

def getMonth():
    month = input("Enter the Month you bought the package: ")
    return month

def packageCheck(package):
    return package == 'A' or package == 'a' or package == 'B' or package == 'b' or package == 'C' or package == 'c'

def minuteCheck(minute):
    if minute >= 0:
        return True
    else:
        return False
    
def monthCheck(month):
    if month == "jan" or month == "mar" or month == "may" or month == "jul" or month == "aug" or month == "oct" or month == "dec":
        return True
    elif month == "apr" or month == "jun" or month == "sep" or month == "nov":
        return True
    elif month == "feb":
        return True
    else:
        return False 

def calculateTotalbill(package,minute):
    if package == 'a' or package == 'A':
        totalbill = 39.99
        if minute > 450:
            totalbill += (minute - 450) * 0.45
            
    elif package == 'b' or package == 'B':
        totalbill = 59.99
        if minute > 900:
            totalbill += (minute - 450) * 0.40
    else:
        totalbill = 69.99 
    return totalbill

def potentialSavings(totalBill, minute):
    if totalBill > 59.99:
        if minute > 900:
            savings_B = totalBill - (59.99 + ((minute - 900) * 0.40))
            print("You can save $" + str(savings_B) + " by opting for package B")
        else:
            savings_B = totalBill - 59.99
            print("You can save $" + str(savings_B) + " by opting for package B")
    if totalBill > 69.99:
        savings_C = totalBill - 69.99
        print("You can save $" + str(savings_C) + " by opting for package C")
    else:
        print("You can save $" + str(0) + " by opting for package C")

if __name__ == "__main__":
    bol = True
    
    displayScreen()
    
    while bol == True:
        package = getPackage()
        while not packageCheck(package):
            package = input("Please input the correct package: ")
        minute = getMinutes()
        while not minuteCheck(minute):
            minute = input("Please input the a non negative value: ")
        month = getMonth()
        while not monthCheck(month):
            print("Invalid input. The number of minutes exceeds the allowed value for the specified month.")
            month = getMonth()
            minute = getMinutes()

        totalBill = calculateTotalbill(package, minute)
        print("TOTAL BILL: " + str(totalBill) + "$")

        potentialSavings(totalBill, minute)
        
        choice = input("Do you want to select another package? (Y/N): ")
        if choice == 'N' or choice == 'n':
            break

            
            