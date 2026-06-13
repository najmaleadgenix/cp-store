class StudentDatabase:
    student_list = []
    
    def add_student(self, student):
        self.student_list.append(student)
    
class Student:
    def __init__(self, id, name, department, is_enrolled):
        self.__id = id
        self.__name = name
        self.__department = department
        self.__is_enrolled = is_enrolled
    
    def enroll_student(self):
        if self.__is_enrolled==True:
            return "Already Enrolled"
        self.__is_enrolled = True  
    
    def drop_student(self):
        if self.__is_enrolled == False:
            return "Is not Enrolled"
        self.__is_enrolled = False
        
    def view_student_info(self):
        print(f"student_id : {self.__id}\n name : {self.__name}\n department : {self.__department} enrollment_status : {self.__is_enrolled}")
    
    
        
sd = StudentDatabase()
S1 = Student(48, "Naziba", "ICT", True)

sd.add_student(S1)





    
