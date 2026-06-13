from abc import ABC
from cart import Cart
class User(ABC):
    def __init__(self,name, phone,email,address):
        self.name=name
        self.phone=phone
        self.email=email
        self.address=address

class Admin(User):
    def __init__(self, name, phone, email, address,restaurant):
        super().__init__(name, phone, email, address)
        self.restaurant = restaurant
    
    def add_new_employee(self,employee):
        self.restaurant.add_employee(employee)
    def view_employee(self):
        self.restaurant.view_employee()
    def add_new_item(self,item):
        self.restaurant.add_item(item)
    def view_item(self):
        self.restaurant.view_item()
    def remove_item(self,item_name):
        self.restaurant.remove_item(item_name)
        
        
class Employee(User):
    def __init__(self, name, phone, email, address,age,designation,salary):
        super().__init__(name, phone, email, address)
        self.age=age
        self.designation = designation
        self.salary=salary

class Customer(User):
    def __init__(self, name, phone, email, address,restaurant):
        super().__init__(name, phone, email, address)
        self.restaurant = restaurant
        self.cart =Cart()
        
    def view_menu(self):
        self.restaurant.view_item()
        
    def add_to_cart(self, item_name, quantity):
        item = self.restaurant.found_item(item_name)
        if item:
            if quantity > item.quantity:
                print(f"We don't have that much food !!")
            else:
                self.cart.add_item(item, quantity)
                item.quantity-=quantity
                print(f"\n{item_name} added to cart")
        else:
            print(f" \"{item_name}\" is not in our menu !")
            
    def view_cart(self):
        self.cart.view_cart()
        
    def pay_bill(self):
        print("Your total bill : ",self.cart.pay_bill)
        self.cart.clear_cart