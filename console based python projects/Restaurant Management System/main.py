from food_item import FoodItem
from menu import Menu
from restaurant import Restaurant
from order import Order
from users import Admin, Customer, Employee

green_chili = Restaurant("Green Chili")
def customer_menu():
    name= input("Enter your name: ")
    phone= input("Enter your phone: ")
    email= input("Enter your email: ")
    address= input("Enter your address: ")
    customer = Customer(name=name, phone= phone, email=email,address=address)
    
    while True:
        print("Welcome {customer.name}")
        print("1. View Menu")
        print("2. Add item to cart")
        print("3. View Cart")
        print("4. Paybill")
        print("5. Exit")
        
        choice= int(input("Enter your choice: "))
        if choice == 1:
            customer.view_menu(green_chili)
        elif choice ==2:
            item_name = input("Enter your item name: ")
            item_quantity= int(input("Enter item quantity: "))
            customer.add_to_cart(green_chili,item_name,item_quantity)
        elif choice ==3:
            customer.view_cart()
        elif choice ==4:
            customer.pay_bill()
        elif choice == 5:
            break
        else: 
            print("Invalid Input")

def admin_menu():
    name= input("Enter your name: ")
    phone= input("Enter your phone: ")
    email= input("Enter your email: ")
    address= input("Enter your address: ")
    admin = Admin(name=name, phone= phone, email=email,address=address)
        
    while True:
        print(f"Welcome {admin.name}")
        print("1. Add new item")
        print("2. Add new employee")
        print("3. view employee")
        print("4. view items")
        print("5. delete item")
        print("6. exit")
        
        choice = int(input("enter your choice: "))
        if choice ==1:
            item_name = input("Enter Item name: ")
            item_price = int(input("Enter item price: "))
            item_quantity = int(input("Enter item quantity: "))
            item = FoodItem(item_name,item_price,item_quantity)
            admin.add_new_item(green_chili,item)
            
        elif choice ==2:
            name= input("Enter your name: ")
            phone= input("Enter your phone: ")
            email= input("Enter your email: ")
            address= input("Enter your address: ")
            age = input("enter your age: ")
            designation = input("Enter your designation: ")
            salary = input("Enter your salary:  ")
            
            employee = Employee(name=name, phone= phone, email=email,address=address,age=age,designation=designation,salary=salary)
            admin.add_employee(green_chili,employee)
        elif choice ==3:
            admin.view_employee(green_chili)
            
        elif choice ==4:
            admin.view_menu(green_chili)
        elif choice ==5:
            item_name= input("Enter item name: ")
            admin.remove_items(green_chili,item_name)
        elif choice ==6:
            break
        else: 
            print("Invalid Input")
      
while True:
    print("Welcome!!")
    print("1. Customer")
    print("2. Admin")
    print("3. Exit")
    choice = int(input("Enter your choice: "))
    if choice ==1:
        customer_menu()
    elif choice==2:
        admin_menu()
    elif choice ==3:
        break
    else:
        print("Invalid input!!")  
            