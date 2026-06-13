class StudentDatabase:
    student_list=[]
    
    @classmethod
    def add_student(cls,student_obj):
        cls.student_list.append(student_obj)
        
class Student:
    def __init__(self,student_id,name,department,is_enrolled):
        self.name=name
        self.student_id=student_id
        self.department=department
        self.is_enrolled=is_enrolled
        
    StudentDatabase.add_student(self)
s1=Student(45,'naziba','ICT',True)
print(StudentDatabase.student_list)
           
# StudentDatabase.add_student('naziba')
# StudentDatabase.add_student('Tabassum')
# print(StudentDatabase.student_list)