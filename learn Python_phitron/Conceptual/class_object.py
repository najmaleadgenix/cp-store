class Shop:
    # products = []
    
    def __init__(self,name):
        self.name = name
        self.products=[]
        self.__balance = 500
        self._owner= "Mr. x" 
    def add_product(self,name, price):
        product = Product(name,price)
        self.products.append(product)
    def get_balance(self):
        return self.__balance
    def __str__(self):
        return f"this is a shop with {self.name}"   
    # def __repr__(self):
    #     return "this is a shop na"
class Product:
    def __init__(self,name, price):
        self.name=name  
        self.price= price  
    # def __str__(self):
    #     return self.name    
    def __repr__(self):
        return self.name
shop1= Shop("Test shop 1")
shop1.add_product("Mobile Phone", 40000)
shop1.add_product("Laptop", 100000)

shop2 = Shop("Test shop 2")
shop2.add_product("monitor", 15000)
shop2.add_product("keyboard", 5000)

# print(shop1)
# print(shop1.name)
# print(shop1.products)
# print(shop2.name)
# print(shop2.products)

print(shop1.get_balance())
print(shop1._owner)