class Vehical:
    def __init__(self, brand, model):
        self.brand=brand
        self.model=model
    def speed(self):
        pass
class Car(Vehical):
    def __init__(self, brand, model,capacity):
        super().__init__(brand,model)
        self.capacity=capacity
class ElectricCar(Car):
    def __init__(self, brand, model, capacity,battery_capacity):
        super().__init__(brand, model, capacity)
        self.battery_capacity=battery_capacity

class Bike(Vehical):
    def __init__(self, brand, model, mileage):
        self.mileage=mileage
        
bmw = Car("bmw", "A8", 7)

print(bmw.brand ,bmw.model, bmw.capacity)


# Multiple Inheritance
class Watch:
    def __init__(self,brand, model):
        self.brand = brand
        self.model = model
    def show_time(self):
        print("Time showing")
        
class FitnessTracker():
    def __init__(self, price):
        self.price=price
    def walking(self):
        print("Walking steps")
        
class SmartWatch(Watch, FitnessTracker):
    def __init__(self, brand, model,price):
        Watch.__init__(self,brand, model)
        FitnessTracker.__init__(self,price)
        
Apple_watch = SmartWatch("Apple", "Ultra", 12000)
print(Apple_watch.brand, Apple_watch.model, Apple_watch.price)