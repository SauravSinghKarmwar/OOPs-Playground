'''
An inner class is a class defined within the scope of 
another class. The inner class is accessible only within
the outer class and can be used to encapsulate related 
functionality or data. 
=> It's a way to organize code and create a relationship 
    between the outer and inner class.
'''

class Student:
    def __init__(self, name, rollno):
        self.name   = name
        self.rollno = rollno
        self.lap    = self.Laptop()

    def show(self):
        print(f'\nname: {self.name}\troll no.: {self.rollno}\n')
        self.lap.show()

    class Laptop:
        def __init__(self):
            self.brand = 'HP'
            self.cpu   = 'i3'
            self.ram   = 4

        def show(self):
            print(f'Laptop: {self.brand}\nCPU: {self.cpu}\nRAM: {self.ram}\n')


s1 = Student("S A U R A V", 2)
s2 = Student("jenny", 2)

s1.show()
