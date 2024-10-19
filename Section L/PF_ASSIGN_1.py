def showMenu():
    print("|---------------------HI!Welcome to my resturnat--------------------------|")
    print("{:<13} {:<20} {:<20}".format("Meal_ID", "Meal_Name", "Meal_PKR_Price"))
    print("{:<10} {:<25} {:<10}".format("1", "Chicken Karahi", "1800"))
    print("{:<10} {:<25} {:<10}".format("2", "Chicken Tikka", "2000"))
    print("{:<10} {:<25} {:<10}".format("3", "Chicken Haleem", "2200"))
    print("{:<10} {:<25} {:<10}".format("4", "Creamy Chicken", "2500"))
    print("{:<10} {:<25} {:<10}".format("5", "Chicken Handi", "800"))
    print("{:<10} {:<25} {:<10}".format("0", "To close menu", "----"))
    print("|-------------------------------------------------------------------------|")

def getChoice():
    choice = int(input("Enter your choice: "))
    return choice

def getQuantity():
    choice2 = input("DO you want more items (y/n)")
    return quantity

def quantityCheck(quantity):
    while quantity > 0:
        quantity = int(input("Enter the number of items: "))
        return quantity
   
if __name__ == "__main__":
    bol = True
    while bol == True:
        choice = getChoice()
        if choice == 1:
            totalBill = 1800
            quantity = getQuantity()
            totalBill *= quantity
            
            
            
            
            
            
             
            