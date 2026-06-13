from abc import ABC, abstractmethod

class Vehicle(ABC):
    
    @abstractmethod
    def start(self):
        pass
    
    @abstractmethod
    def stop(self):
        pass
    
class Car(Vehicle):
    def __init__(self):
        super().__init__()
        
    def start(self):
        return f"the starts"
    def stop(self):
        return f"the car stops"
        
c1 = Car()
print(c1.start())
print(c1.stop())
    