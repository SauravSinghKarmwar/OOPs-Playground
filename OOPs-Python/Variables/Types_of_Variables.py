'''
There are mainly two types of variables that can be 
used within a class:

1. Instance Variable(Attributes): These variables are unique
    to each instance(object) of the class.

2. Class Variable(Static Variables): These variables are 
    shared across all instances of the class. 
'''
# namespace : It is an area where you create and store object/variable

class car:
    def __init__(self) -> None:
        self.mil = 10
        self.com = "BMW"

    wheels = 4


c1 = car()
c2 = car()

c1.mil = 8

car.wheels = 3

print(c1.com, c1.mil, c1.wheels)
print(c2.com, c2.mil, c2.wheels)