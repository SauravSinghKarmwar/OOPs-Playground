'''
In inheritance when a child class is created, it can 
have its own constructor to initialize its specific
attributes and behaviour. 
This constructor is defined in the child and is 
responsible for handling the initialization of
attributes of attributes specific to the child class,
as well as any additional operations that need to be
performed during the creation of objects of the child 
class.
'''

class A:
    def __init__(self):
        print("In A init")

    def feature1(self):
        print("Feature 1 working")

    def feature2(self):
        print("Feature 2 working")

class B(A):
    def __init__(self):
        super().__init__()
        print("In B init")

    def feature3(self):
        print("Feature 3 working")

    def feature4(self):
        print("Feature 4 working")

class C(B):
    def  __init__(self):
        super().__init__()
        print("in C init")

    def feat(self):
        super().feature2()


a1 = C()

print(a1)
a1.feat()