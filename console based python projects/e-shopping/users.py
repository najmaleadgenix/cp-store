from abc import ABC

class User(ABC):
    def __init__(self,email,password):
        self.email=email
        self.password=password

class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        
    def add_product(self,product):
        
        
class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        