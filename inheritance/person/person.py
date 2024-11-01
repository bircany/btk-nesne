class Person:
    def __init__(self,name,age):
        self.__name = name
        self.__age = age
        print("Person Nesnesi oluşturuldu")
    
    @property
    def name(self):
        return self.__name
    
    @name.setter
    def name(self,name):
        self.__name = name        

    @property
    def age(self):
        return self.__age
    
    @age.setter
    def age(self,age):
        self.__age = age
    
    def display_info(self):
        print(f"İsim: {self.name}, Yaş : {self.age}")

class Student(Person):
    def __init__(self,name,age,school_number):
        super().__init__(name,age)
        print("Student Nesnesi oluşturuldu")
        self.__school_number = school_number
    
    @property
    def school_number(self):
        return self.__school_number
    
    @school_number.setter
    def school_number(self,school_number):
        self.__school_number = school_number
    
    def display_info(self):
        print(f"Öğrenci Bilgileri -> İsim: {self.name}, Yaş: {self.age}, Öğrenci Numarası: {self.school_number}") 



class Teacher(Person):
    def __init__(self, name, age, subject):
        super().__init__(name, age)
        print("Teacher Nesnesi oluşturuldu")
        self.__subject = subject

    @property
    def subject(self):
        return self.__subject
    
    @subject.setter
    def subject(self,subject):
        self.__subject = subject

    def display_info(self):
        print(f"Öğretmen Bilgileri -> İsim: {self.name}, Yaş: {self.age}, Ders: {self.subject}")



if __name__ == "__main__":
    student = Student("Ahmet", 20, "1235")
    student.display_info()
    teacher = Teacher("Elif", 35, "Matematik")
    teacher.display_info()