'''
The constructor method is defined using the special method
"__init__", and "self" is a reference to the instance of the
object being created. The constructor is responsible for 
initializing the object's attributes when the object is 
created.
'''
# Every time you create an object it is allocated to new space

class Computer:
    def __init__(self):
        self.name = "Saurav"
        self.age = 20

    def update(self):
        self.age = 21

    def compare(self, other):
        if self.age == other.age:
            return True
        else:
            return False

c1 = Computer()
c1.age = 19
c2 = Computer()

if c1.compare(c2):
    print("They are equal")
else:
    print("They are different")

#c1.update()

print(c1.name)
print(c1.age)
print(c2.name)