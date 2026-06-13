from product import Product

class Order:
    def __init__(self):
        self.cart = []
    
    def find_product(self, product_name):
        for product in self.products:
            if product.name.lower() == product_name.lower():
                return product
        return None
    
    def add_to_cart(self, product_name, quantity):
        product = self.find_product(product_name)
        if product:
            if quantity > product.quantity:
                print(f"Not available that much {product.name}\n\n")
            else:
                pass
    
    def remove_a_product_from_cart(self, product):
        self.cart.remove(product)
        
    def clear_cart(self):
        self.cart= []
        