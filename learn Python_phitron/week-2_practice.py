class Product:
    def __init__(self,name):
        self.name=name
       
class shop:
    def __init__(self,shop_name):
        self.shop_name=shop_name
        self.products= []
    def add_product(self,item):
        product=Product(item)
        self.products.append(product)
    def buy_product(self,product_name):
        for product in self.products:
            if product_name==product.name:
                self.products.remove(product)
                print('Congrats')

    
my_shop=shop('Selling Talent')
my_shop.add_product('orange')
my_shop.add_product('mango')
my_shop.add_product('lemon')

my_shop.buy_product('lemon')