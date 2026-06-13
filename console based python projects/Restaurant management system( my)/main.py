from user import Admin, Customer, Employee
from restaurant import Restaurant
from cart import Cart
from food_item import FoodItem

restaurant = Restaurant("Yummy")

def admin_menu():
    name = input("Enter your name: ")
    phone = input("Enter your phone: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")
    
    admin = Admin(name, phone, email, address,restaurant)
    
    while True:
        print(f"______________welcome {admin.name}_______________")
        print("1. Add Employee\n"
              "2. View Employee\n"
              "3. Add Item\n"
              "4. View Item\n"
              "5. delete Item\n"
              "6. Exit\n")
        choice = int(input("Enter Your Choice: "))
        if choice ==1:
            name = input("Enter employee name: ")
            phone = int(input("Enter employee phone number: "))
            email = input("Enter employee email: ")
            address = input("Enter employee address: ")
            age = int(input("Enter employee age: "))
            designation = input("Enter employee designation: ")
            salary = int(input("Enter employee salary: "))
            
            emp = Employee(name,phone, email,address,age,designation,salary)
            admin.add_new_employee(emp)
            
        elif choice ==2:
            admin.view_employee()
        elif choice==3:
            name = input("Enter Item name: ")
            price = int(input("Enter item's price: "))
            quantity = int(input("Enter item's quantity: "))
            
            item =FoodItem(name,price, quantity)
            admin.add_new_item(item)
        elif choice ==4:
            admin.view_item()
        elif choice ==5:
            name = input("Enter Item name: ")
            admin.remove_item(name)
        elif choice ==6:
            break
        else: 
            print("Invalid Input")

def customer_menu():
    name = input("Enter your name: ")
    phone = input("Enter your phone: ")
    email = input("Enter your email: ")
    address = input("Enter your address: ")
    
    customer = Customer(name, phone, email, address,restaurant)
    
    while True:
        print(f"________________Welcome {customer.name}__________")
        print("1. View Menu")
        print("2. Add item to Cart")
        print("3. View Cart")
        print("4. Pay bill")
        print("5. Exit")
        
        choice = int(input("Enter your choice: "))
        if choice ==1:
            customer.view_menu()
        elif choice==2:
            name = input("Enter item name: ")
            quantity = int(input("Enter item Quantity: "))
            customer.add_to_cart(name,quantity)
        elif choice==3:
            customer.view_cart()
        elif choice ==4:
            customer.pay_bill()
        elif choice==5:
            break
        else:
            print("Invalid input")


while True:
    print(f"__________WElcome {restaurant.name}__________")
    print("1. Customer\n"
          "2. Admin\n"
          "3. exit\n"
          )
    choice = int(input("Enter your choice: "))
    if choice == 1:
         customer_menu()
    elif choice ==2:
         admin_menu()
    elif choice ==3:
         break
    else:
         print("Invalid Input")

    