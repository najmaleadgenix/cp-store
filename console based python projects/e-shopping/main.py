from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, email,password):
        self.__email = email
        self.__password = password

class Seller(User):
    def __init__(self, email, password, all_product):
        super().__init__(email, password)
        self.all_product = all_product
        
    def add_product(self,product):
        self.all_product.add_product(product)
        
    def show_product(self):
        self.all_product.view_product()
        
class Item:
    def __init__(self,name,price,quantity):
        self.name = name
        self.price = price 
        self.quantity = quantity

class All_Product: 
    products = []
    def __init__(self):
        pass     

    def add_product(self, product):
        self.products.append(product)

    def view_product(self):
        for i in self.products:
            print(f"{i.name}\t{i.price}\t{i.quantity}")

all_product = All_Product()

seller1 = Seller("sel1@gamil.com", "1234", all_product)
alu = Item("Alu", 10, 5)
tomato = Item("Tomato", 5, 3)

seller1.add_product(alu)
seller1.add_product(tomato)
seller1.show_product()


        