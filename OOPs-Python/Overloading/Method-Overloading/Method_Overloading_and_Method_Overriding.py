'''
1. Method Overloading:
It refers to the ability to define multiple methods in
a class with the same name but different parameters. 

2. Method Overriding:
It refer to the ability of a subclass to provide a specific
implementation for a method that is already defined in its 
superclass. When a method is overridden in the subclass, 
calling that method on an object of the superclass's
method.
It is a key feature of inheritance and allows a subclass
to provide its own customized behaviour while retaining
the method's name and signature from the superclass.
'''

# Method Overloading:
class Student:
    def __init__(self, m1, m2):
        self.m1 = m1
        self.m2 = m2

    def sum(self,a=None, b=None, c=None):
        if a!=None and b!=None and c!=None:
            n = a + b + c
        elif a!=None and b!=None:
            n = a + b
        elif a!=None and c!=None:
            n = a + c
        elif b!=None and c!=None:
            n = b + c
        else:
            n = a
        
        return n


s1 = Student(58, 69)

print(s1.sum(5,9,6))

print("------------------------------")

# Method Overriding
class A:
    def show(self):
        print("In A show")

class B(A):
    def show(self):
        print("In B show")


a1 = B()

a1.show()