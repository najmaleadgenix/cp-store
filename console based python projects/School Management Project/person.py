class Person:
    def __init__(self,name):
        self.name=name
    
class Teacher(Person):
    def __init__(self, name):
        super().__init__(name)
    
    def teach(self):
        pass
    def evaluate_exam(self):
        pass
    
class Student(Person):
    def __init__(self, name):
        super().__init__(name)