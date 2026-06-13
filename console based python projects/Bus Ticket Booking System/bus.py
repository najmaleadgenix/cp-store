class Bus: 
    def __init__(self,number, route,total_seats): 
        self.number =number 
        self.route = route 
        self.total_seats = total_seats 
        self.booked_seats = 0 
        
    def available_seats(self): 
        return self.total_seats - self.booked_seats
     
    def book_seat(self): 
        if self.available_seats() > 0: 
            self.booked_seats +=1 
            # print("\n 1 seat added\n") 
            return True
        else: 
            # print("\nNo seat available\n")
            return False
                
class Passenger:
    def __init__(self,name,phone,bus):
        self.name=name
        self.phone=phone
        self.bus = bus 
                
class Admin:
    def __init__(self, username, password):
        self.username = username
        self.password = password
        
    def login(self,username, password):
        if self.username == username and self.password == password:
            return True
        else:
            return False
    
class BusSystem:
    def __init__(self):
        self.buses = []
        self.passengers = []
    
    def check_bus_exists_or_not(self,number):
         for bus in self.buses:
            if bus.number == number:
                return bus
        
    def add_bus(self, number, route, total_seats):
        if self.check_bus_exists_or_not(number) is not None:
            print("\n You can't add bus with same number\n")
        else:
            self.buses.append(Bus(number,route,total_seats))
            print(f"Bus with number {number} added successfully")
        
    def remove_bus(self, number):
        bus = self.check_bus_exists_or_not(number)
        if bus:
            self.buses.remove(bus)
            print(f"Bus with number-{number} deleted")
        else:
            print(f"Bus with number-{number} dosen't exists")
            
    def view_buses(self):
        print("*****All Bus********")
        print("Number\t route\t total_seat\t available_seat\t")
        for bus in self.buses:
            print(f"{bus.number}\t {bus.route}\t {bus.total_seats}\t {bus.available_seats()}") 

    def book_ticket(self,bus_number, name, phone):
        print("\nEach ticket a fixed fare- 500 taka")
        for bus in self.buses:
            if bus.number == bus_number:
                if bus.book_seat():
                    print("1 ticket added successfully")
                    passenger = Passenger(name,phone,bus)
                    self.passengers.append(passenger)
                else:
                    print(f"No seat available on number- {bus_number}") 
                      
                return
        print("Enter correct number")
        
def admin_menu(busSystem):
           
    while(True):
        print("________Welcome to Admin Menu______")
        print("1. Add Bus ")
        print("2. View All Bus")
        print("3. Logout")
        
        choice = int(input("Enter your choice:  "))
        if choice == 1:
            number =input("Enter Bus Number: ")
            route= input("Enter route: ")
            total_seats= int(input("Enter total seat: "))
            busSystem.add_bus(number,route, total_seats)
        elif choice ==2:
            busSystem.view_buses()
        elif choice ==3:
            break
        else:
            print("Enter correct choice") 

def menu():
    bus_system = BusSystem()
    
    while(True):
        print("__________Bangladesh Bus Ticket Booking system________")
        print("1. Admin Login")
        print("2. Book Ticket")
        print("3. View Buses")
        print("4. Exit")
        
        choice = int(input("Enter your choice: "))
        if choice==1:
            name = input("Enter Username: ")
            password = input("Enter Password: ")
            
            admin = Admin(name, password)
            print("Admin account created successfully\n")
            
            print("Login to your account---")
            username = input("Enter your username: ")
            password = input("Enter your password: ")
            
            if admin.login(username,password):
                admin_menu(bus_system)
            else:
                print("**Invalid admin account**")
            
                
        elif choice ==2:
            number = input("Enter Bus Number: ")
            name= input("Enter your name: ")
            phone = input("Enter your phone: ")
            
            bus_system.book_ticket(number,name,phone)
        elif choice ==3:
            bus_system.view_buses()
        elif choice==4:
            break
        else:
            print("Enter valid choice")
        
        
        
menu()