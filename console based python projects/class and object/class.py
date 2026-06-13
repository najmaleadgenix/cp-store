# class dog:
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
        
#     def sit(self):
#         print(f'{self.name} is sitting now')
#     def roll_over(self):
#         print(f'{self.name} is roll over')
    
# newdog=dog('bob',12)
# print(newdog.name.title())
# print(str(newdog.age))
# newdog.sit()
# newdog.roll_over()

#-----------------------------Restaurant-------------------------------
""" 
class Restaurant:
    def __init__(self, restuarant_name,cuisine_type):
        self.restuarant_name=restuarant_name
        self.cuisine_type=cuisine_type
        
    def describe_restuarant(self):
        print(self.restuarant_name)
        print(self.cuisine_type)
        
    def open_resturant(self):
        print("---Restuarant is Open---")
"""
    

# restuarant=Restaurant("Italiano","Italian")
# print(restuarant.restuarant_name)
# print(restuarant.cuisine_type)
# restuarant.describe_restuarant()
# restuarant.open_resturant()

#----------------------Three Restaurants---------------------

# restaurant1 = Restaurant("Pizzaria","Pizza")
# restaurant2= Restaurant('Bun Bun','Barger')  
# restaurant3= Restaurant('Italiano', 'Italian')

# restaurant1.describe_restuarant()
# restaurant2.describe_restuarant()
# restaurant3.describe_restuarant()

#---------------------------------- USER ---------------------------------
""" class users:
    def __init__(self,first_name, last_name,age,email,country):
        self.first_name=first_name
        self.last_name=last_name
        self.age=age
        self.email=email
        self.country=country
    def describe_user(self):
        print(f'-----User profile summary----')
        print(f'Name : {self.first_name} {self.last_name}')
        print(f'Age : {self.age}')
        print(f'email : {self.email}')
        print(f'Country : {self.country}')
    def greet_user(self):
        print(f'\nWelcome Back {self.first_name}!\n')
"""
# user1 = users('Naziba','Tabassum',20,'naziba010@gmail.com','Bangladesh')
# user2 = users('Afia','Tasnim',18,'afianim@gmail.com','Bangladesh')
# user3= users('Anika','Sania',15,'none','Bangladesh')

# user1.describe_user()
# user1.greet_user()

# user2.describe_user()
# user2.greet_user()

# user3.describe_user()
# user3.greet_user()

#------------------------------- Car --------------------------------------
"""
class cars:
    auto_meter=0
    def __init__(self,name,model,year):
        self.name=name
        self.model=model
        self.year=year
    def get_discriptive_name(self):
        long_name=self.name+' '+ self.model+ ' ' + str(self.year)
        return long_name.title()
"""
# my_car=cars('audi','A4',1967)
# my_car.auto_meter=23
# print(my_car.auto_meter)
# print(my_car.get_discriptive_name())

#----------------------- Numbered Served -----------------------------------

"""
class Restaurant:
    def __init__(self, restuarant_name,cuisine_type):
        self.restuarant_name=restuarant_name
        self.cuisine_type=cuisine_type
        self.number_served=0
        
    def describe_restuarant(self):
        print(self.restuarant_name)
        print(self.cuisine_type)
        
    def increment_number_served(self,number):
        self.number_served+=number
    def open_resturant(self):
        print("---Restuarant is Open---")
    
    def set_number_served(self,num):
        self.number_served=num 
"""
        

# restaurant=Restaurant('Bun Bun','Italian')

# print(restaurant.number_served)

# restaurant.number_served=5
# print(restaurant.number_served)

# restaurant.set_number_served(10)
# print(restaurant.number_served)

# restaurant.increment_number_served(7)
# print(restaurant.number_served)

#--------------------------- Log in Attemps ---------------------------------
"""
class users:
    def __init__(self,first_name, last_name,age,email,country):
        self.first_name=first_name
        self.last_name=last_name
        self.age=age
        self.email=email
        self.country=country
        self.log_in_attemps=0
        
    def describe_user(self):
        print(f'-----User profile summary----')
        print(f'Name : {self.first_name} {self.last_name}')
        print(f'Age : {self.age}')
        print(f'email : {self.email}')
        print(f'Country : {self.country}')
        
    def greet_user(self):
        print(f'\nWelcome Back {self.first_name}!\n')

    def increment_login_attemps(self):
        self.log_in_attemps+=1
        
    def reset_login_attemps(self):
        self.log_in_attemps=0
"""
        
# user = users('Naziba','Tabassum',20,'naziba010@gmail.com','Bangladesh')
# user.increment_login_attemps()
# user.increment_login_attemps()
# user.increment_login_attemps()
# user.increment_login_attemps()
# user.increment_login_attemps()

# print(user.log_in_attemps)

# user.reset_login_attemps()

# print(user.log_in_attemps)
    

class cars:
    auto_meter=0
    def __init__(self,name,model,year):
        self.name=name
        self.model=model
        self.year=year
    def get_discriptive_name(self):
        long_name=self.name+' '+ self.model+ ' ' + str(self.year)
        return long_name.title()
class electric_car(cars):

    def __init__(self, name, model, year):
        super().__init__(name, model, year) 
        self.battery_size=40
        self.bat=Battery(200,500)
        
    def descriptive(self):
        return f'this car has {self.battery_size} km//h'

class Battery:
    def __init__(self,battery,range):
        self.battery=battery
        self.range=range
    def print(self):
        return f'this car is battery {self.battery}'
    def get_range(self):
        if self.battery<=70:
            self.range =270
        else:
            self.range =300
        return f'the get range is {self.range}'
    
my_car=electric_car('tesla','model s',2016)

# print(my_car.get_discriptive_name())
# print(my_car.descriptive())
# print(my_car.bat.battery)
# print(my_car.bat.print())
# print(my_car.bat.get_range())

#-------------------------------- Ice Cream Stand ------------------------------------
class Restaurant:
    def __init__(self, restuarant_name,cuisine_type):
        self.restuarant_name=restuarant_name
        self.cuisine_type=cuisine_type
        self.number_served=0
        
    def describe_restuarant(self):
        print(self.restuarant_name)
        print(self.cuisine_type)
        
    def increment_number_served(self,number):
        self.number_served+=number
    def open_resturant(self):
        print("---Restuarant is Open---")
    
    def set_number_served(self,num):
        self.number_served=num 
        
class IceCreamStand(Restaurant):
    def __init__(self, restuarant_name, cuisine_type):
        super().__init__(restuarant_name, cuisine_type)
        self.flavors=['vanilla','chocolate','blueberry']
    def display_flavour(self):
        print(f'Available flavours ---')
        for i in self.flavors:
            print(f'- {i}')
# ice_cream=IceCreamStand('iceyyyy','ice cream')
# ice_cream.display_flavour()
    
#------------------------------------ Admin -----------------------------------------
class users:
    def __init__(self,first_name, last_name,age,email,country):
        self.first_name=first_name
        self.last_name=last_name
        self.age=age
        self.email=email
        self.country=country
        self.log_in_attemps=0
        
    def describe_user(self):
        print(f'-----User profile summary----')
        print(f'Name : {self.first_name} {self.last_name}')
        print(f'Age : {self.age}')
        print(f'email : {self.email}')
        print(f'Country : {self.country}')
        
    def greet_user(self):
        print(f'\nWelcome Back {self.first_name}!\n')

    def increment_login_attemps(self):
        self.log_in_attemps+=1
        
    def reset_login_attemps(self):
        self.log_in_attemps=0
        
class Admin(users):
    def __init__(self, first_name, last_name, age, email, country):
        super().__init__(first_name, last_name, age, email, country)
        self.privileges=['can add post', 'can delet post', 'can ban users', 'can reset passwords']
        
    def show_privileges(self):
        print('--Administrators Set of Privileges--')
        for i in self.privileges:
            print(f'- {i}')
            
# admin = Admin('Naziba', 'Tabassum', 20, 'naziba010@gmail.com', 'Bangladesh')
# admin.show_privileges()
    
class Privileges:
    def __init__(self):
        self.privileges=['can add post', 'can delet post', 'can ban users', 'can reset passwords']
    def show_privileges(self):
        print('--Administrators Set of Privileges--')
        for i in self.privileges:
            print(f'- {i}')
            
privilege= Admin('Naziba', 'Tabassum', 20, 'naziba010@gmail.com', 'Bangladesh')

