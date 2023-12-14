'''
There are mainly three types of methods:

1. Instance Methods: It takes the instance (object) as
    the first parameter, usually named 'self', and they 
    can access and modify the instance's attributes and
    perform actions related to that specific instance.
    => There are two types of instance methods:
        a. Accessor Methods:  It is used for only fetching
                                the variables.
        b. Mutator Methods :  It is used for modifying the 
                                variables.

2. Class Methods: It is bounded to the class rather than
    an instance of the class. They take class as the first
    parameter, usually named 'cls', and they can access and
    modify class-level attributes.
    => It is denoted with the '@classmethod' decorator.
    => It is useful when you want to perform an action that 
        affects the entire class, not just a specific instance.

3. Static Methods: These methods do not take the instance 
    or class as a special first parameter. They are independent
    of the class and do not have access to instance or class
    attributes. 
    => It is denoted with the '@staticmethod' decorator.
    => It is useful when you have a method that does not depend
        on any instance or class-specific information.
'''

class Student:
    school = 'GGI'

    def __init__(self, m1, m2, m3):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def avg(self):
        return (self.m1 + self.m2 + self.m3) /3

    def get_m1(self):   # Accessor
        return self.m1

    def set_m1(self, value):    # Mutator
        self.m1 = value

    @classmethod
    def getSchool(cls):
        return cls.school

    @staticmethod
    def info():
        print("This is student class.. in abc module")

s1 = Student(34, 67, 32)
s2 = Student(89, 32, 12)


print(f"{s1.avg():.2f}")
print(Student.getSchool())
Student.info()