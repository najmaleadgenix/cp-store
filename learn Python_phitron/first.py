# name=" Naziba "
# print(name.rstrip())
# print(name.lstrip())
# print(name.strip())
# print(name.removeprefix(" N"))
# print(name.removesuffix("ba "))
# age=14_0001_000
# print(age)
# lst=['aaaa', 'bbbbb','ccccc']
# lst.sort(reverse=True)
# print(sorted(lst))
# print(len(lst))
# cube=[i*i*i for i in range(1,10)]
# print(cube)
# my_food=["icecream","muri","chanachur"]
# friend_food=my_food[:]
# # friend_food=my_food
# print(my_food)
# print(friend_food)
# for i in range(1,4):
#     print
    
    #------------------pyautohui-------------
# import pyautogui
# import time
# n=int(input())
# time.sleep(3)
# for i in range(1,n+1):
#     for j in range(i):
#         # print("*",end="")
#         pyautogui.write("*",interval=0.20)
#     # print()
#     pyautogui.press("Enter")

# import pyautogui
# import time
# time.sleep(3)
# for i in range(10):
#     pyautogui.write("Talented", interval=.1)
#     pyautogui.press("Enter")

                                #--------class---------
# class phone:
#     pass

# class phone:
#     price=19000
#     color='blue'
#     brand='samsung'
# my_phone=phone()
# print(my_phone)
# print(my_phone.color)
# print(my_phone.brand)
# print(my_phone.price)

# class phone:
#     brand='samsung'
#     color='blue'
#     price=120000
    
#     def call(self):
#         print('calling one person')
#     def send_sms(self,number,sms):
#         text=f"the number is {number} and the sms is {sms}"
#         return text
# my_phone=phone()
# print(my_phone)
# my_phone.call()
# result=my_phone.send_sms(234523,'I forget to miss you')
# print(result)


# class phone:
#     def __init__(self, owner, brand, price):
#         self.owner=owner
#         self.brand=brand
#         self.price=price
#     def send_sms(self,number, sms):
#         text=f'sending to {number} {sms}'
#         print(text)
# my_phone=phone('me','samsung',34567)
# print(my_phone.owner,my_phone.brand,my_phone.price)

# -----------pen class | create 3 object with different instance attribute 
# class pen:
#     def __init__(self, brand, price, color):
#         self.brand=brand
#         self.color=color
#         self.price=price
# my_pen=pen('matador',10,'blue')
# print(my_pen.brand, my_pen.price, my_pen.color)

# new_pen=pen('goodluck',15,'black')
# print(new_pen.brand,new_pen.color, new_pen.price)

# ex_pen=pen('econo',10,'red')
# print(ex_pen.brand, ex_pen.color,ex_pen.price)

# ------------------class attribute VS instance attribute----------
# class shop:
#     cart=[]                       # cart is a class attribute
#     def __init__(self,buyer):
#         self.buyer=buyer
#     def add_to_cart(self,item):               
#         self.cart.append(item)
# mahi=shop('mahi')
# mahi.add_to_cart('shoe')
# mahi.add_to_cart('phone')
# print(mahi.cart)

# nisho=shop('nisho')
# nisho.add_to_cart('watch')
# nisho.add_to_cart('hat')
# print(nisho.cart)
    
# class shop:
#     def __init__(self,buyer):
#         self.buyer=buyer
#         self.cart=[]
#     def add_to_cart(self,item):
#         self.cart.append(item)
# mahi=shop('mahi')
# mahi.add_to_cart('shoe')
# mahi.add_to_cart('phone')
# print(mahi.cart)

# nisho=shop('nisho')
# nisho.add_to_cart('watch')
# nisho.add_to_cart('hat')
# print(nisho.cart)

#-------------Explore bank---------

# class bank:
#     def __init__(self,balance):
#         self.balance=balance
#         self.min_amount=100
#         self.max_amount=10000
#     def get_balance(self):
#         return self.balance
#     def deposit(self,amount):
#         if(amount>0):
#             self.balance+=amount
#     def withdraw(self,amount):
#         if amount<self.min_amount:
#             print(f'Poor, you cant withdraw less than {self.min_amount}')
#         elif amount>self.max_amount:
#             print(f'Wanna bank be poor? You can not withdraw more than {self.max_amount}')
#         else:
#             self.balance-=amount
#             print(f'here is your money: {amount}')
# brac=bank(20000)
# brac.withdraw(15000)
# result=brac.get_balance()
# print(result)
# brac.deposit(200)
# print(brac.get_balance())
            
# ------------Exam: Attend to exam get marks-------
# class exam:
#     def __init__(self,mark):
#         self.mark=mark
#         self.min_mark=40
#         self.max_mark=100
#     def get_mark(self):
#         return self.mark
#     def can_attend(self,mark):
#         if mark < self.min_mark:
#             print(f'you can not attend below {self.min_mark} mark')
#         elif mark > self.max_mark:
#             print(f'Come back to reality bro.. Give your accurate mark')
#         else:
#             print(f'you are eligible for exam')
# me=exam(60)

# print(me.get_mark())
# me.can_attend(70)

#----------shopping checkout and price calculation-------
"""
class shopping:
    def __init__(self,name):
        self.name=name
        self.cart=[]
    def add_to_cart(self,item,price,quantity):
        product={ 'item':item, 'price':price, 'quantity':quantity }
        self.cart.append(product)
    def checkout(self,amount):
        total = 0
        for item in self.cart:
            total +=item['price']*item['quantity']
        if total>amount:
            print(f'please provide {total-amount} more')
        else:
            print(f'here is your item and extra money {amount-total}')
me=shopping('me')
me.add_to_cart('alu', 10, 5)
me.add_to_cart('rice', 50, 5)
me.add_to_cart('egg', 12, 12)
print(me.cart)
me.checkout(500)
    
    """
                 
            
#---------------------------------------------------------------------------
class bank:
    def __init__(self,holder_name,initial_deposit):
        self.holder_name=holder_name
        self.__balance=initial_deposit
    def deposit(self,amount):
        self.__balance+=amount
    def get_balance(self):
        return self.__balance
# rafson=bank('Choto_bro',10000)

# print(rafson.holder_name)
# rafson.deposit(2000)
# print(rafson.get_balance())
# # print(dir(rafson))
# print(rafson._bank__balance)

#---------------------- Abstruction -------------------------------------------
from abc import ABC, abstractmethod
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print('i need food')
        
    def move(self):
        pass

class Monkey(Animal):
    def __init__(self,name):
       super().__init__()
       self.name=name
       self.category='monkey'
    def eat(self):
        print('hey i eat banana')
    def move(self):
        print('i like that')
    
# lyka=Monkey('lyka')
# lyka.eat()
# lyka.move()


#         _______________________ Overload ___________________

class person:
    def __init__(self,name,age,height,weight):
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
    def __add__(self,other):
        return self.age + other.age
    def __mul__(self,other):
        return self.height * other.height
class cricketer(person):
    def __init__(self, name, age, height, weight,team):
        self.team=team
        super().__init__(name, age, height, weight)
# sakib= cricketer('sakib',30,67,70,'BD')
# moshi= cricketer('moshi',33,66,75,'BD')

# print(sakib + moshi)
# print(sakib * moshi)

class Shopping:
    cart = [] # Class Attribute # Static Attribute
    
    def __init__(self,name,location):
        self.name=name
        self.location=location
    
    def purchase(self,iteam,price,amount):
        remaining=amount-price
        print(f'buying :{iteam} for {price}')
    @classmethod
    def hudai_dekhi(self,item):
        print('ghure berai hudai dekhi',item)
    @staticmethod
    def multi(a,b):
        print(a*b)
# basundhara=Shopping('bas un dhora', 'unreached')

# basundhara.purchase('watch',2000,3000)
# Shopping.purchase('basundhora','dress',3500,4000)

# basundhara.hudai_dekhi('t-shirt')
# Shopping.hudai_dekhi('pen')

# Shopping.multi(2,3)
        
        
#                     ___________ getter setter ______________________________
"""
class User:
    def __init__(self,name,age,money):
        self.name=name
        self._age=age
        self.__money=money
    
    @property
    def age(self):
        return self._age
    
    @property
    def salary(self):          # getter
        return self.__money
    
    @salary.setter
    def salary(self,value):
        if value<0:
            print('Value can not be negetive')
        else:
            self.__money+= value
    
samsu= User('samsu',30, 12000)

samsu.salary=3000

print(samsu.salary)

        """
        
# ___________________________________ Inner function and wraper function _________________

def double_decker():
    print('starting double decker')
    
    def inner_func():
        print('inside the inner func')
        return 3000
    return inner_func

# print(double_decker())
# print(double_decker()())

"""
def do_something(work):
    print('star working')
    # print(work)
    work()
    print('end working')
# do_something('eye')

def coding():
    print('happy coding')

do_something(coding)
        """
# ________________________________ How dose decorator work ______________________
def timer():
    def inner():
        print('time started')
        
        print('time ended')
    return inner

timer()()

