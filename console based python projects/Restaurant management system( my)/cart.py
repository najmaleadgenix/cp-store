class Cart:
    def __init__(self):
        self.items = {}
    def add_item(self, item, quantity):
        if item in self.items:
            self.items[item]+=quantity
        else:
            self.items[item] = quantity
    def view_cart(self):
        print(
            "\n*******Your_Cart********\n"
            "Name\tprice\tquantity\n"
            "---------------------------------"
                )
        for item, quantity in self.items.items():
            price = item.price
            item.price = item.price * quantity
            print(f"{item.name}\t{item.price}\t{quantity}")
            item.price = price
    @property
    def pay_bill(self):
       return (sum( item.price * quantity for item, quantity in self.items.items()))
       
    @property 
    def clear_cart(self):
        self.items= {}