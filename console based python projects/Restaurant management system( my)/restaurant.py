class Restaurant:
    def __init__(self,name):
        self.name = name
        self.employees = []
        self.items= []
    
    def add_employee(self,employee):
        self.employees.append(employee)
    def view_employee(self):
        print("\n****All_Employees****\n")
        print("Name\tEmail\t\tPhone\tAddress\t\tAge\tDesignation\tSalary")
        for employee in self.employees:
            print(f"{employee.name}\t{employee.email}\t{employee.phone}\t{employee.address}\t\t{employee.age}\t{employee.designation}\t\t{employee.salary}\n")

    def add_item(self,item):
        self.items.append(item)
    def found_item(self,item_name):
        for item in self.items:
            if item.name.lower()==item_name.lower():
                return item
        return None
    def remove_item(self,item_name):
        item = self.found_item(item_name)
        if item:
            self.items.remove(item)
        else:
            print(f"Your item - \"{item_name}\" dosen't exist !")
    def view_item(self):
        print(
            "\n*********Items**********\n"
            "Name\t Price\t Quantity\n"
            "---------------------------------"
              )
        
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")