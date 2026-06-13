class StudentDatabase:
    def __init__(self):
        self.student_list = []
    
    def add_student(self, student):
        self.student_list.append(student)
    
class Student():
    def __init__(self, student_id, name, department, is_enrolled):
        self.__student_id= student_id
        self.__name = name
        self.__department= department
        self.__is_enrolled = is_enrolled

    def enrolled_student(self):
        if self.__is_enrolled == False:
            self.__is_enrolled= True
        else: 
            self.__is_enrolled= True
    
    def drop_student(self,bol):
        self.__is_enrolled= bol

    def view_student_info(self):
        print(f"ID: {self.__student_id}, Name: {self.__name}, Department: {self.__department}, Enrolled: {self.__is_enrolled}")


sd = StudentDatabase()

s1= Student("S101", "Alice Smith", "Computer Science", True)
s2 = Student("S102", "Bob Jhonson", "Mathematics", False)
s3 = Student("S103", "Charlie Lee", "Physics", True)

sd.add_student(s1)
sd.add_student(s2)

while(True):
    print("-------------Student Management Menu----------------")
    print("1. View all students")
    print("2. Enroll Student")
    print("3. Drop Student")
    print("4. Exit")
    
    option = input("Enter your choice (1-4): ")
    
    if option=="1":
        s1.view_student_info()
        s2.view_student_info()
        s3.view_student_info()
    elif option =="2":
        inp = input("Enter student id to enroll: ")
        if inp =="S101" or inp=="S102" or inp=="S103":
            print("Already Enrolled")
        else:
            print("Not enrolled")
    elif option =="3":
        inp = input("Enter student id to drop: ")
        if inp=="S101":
            s1.drop_student(False)
        elif inp=='S102':
            s2.drop_student(False)
        elif inp=="S103":
            s3.drop_student(False)
            
        print(f"student {inp} has been dropped")
    elif option == "4":
        break;       
        