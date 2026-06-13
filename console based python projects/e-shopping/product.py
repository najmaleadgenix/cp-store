class Product:
    def __init__(self,name,price,quantity):
        self.name=name
        self.price=price
        self.quantity=quantity
        self.products = []
        
    def add_product(self,product):
        self.products.append(product)
    
    def remove_product(self,product_name):
        self.products.remove(product_name)
        