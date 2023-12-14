'''
The "__init__" method is a special method used to initialize
objects of a class. It is also known as the constructor method.
'''

class Computer:

    def __init__(self, cpu, ram):
        self.cpu = cpu
        self.ram = ram

    def config(self):
        print(f"\nConfiguration:\nCPU: {self.cpu}\nRAM: {self.ram}\n")

com1 = Computer('i5', 16)
com2 = Computer('Ryzen 3', 8)

com1.config()
com2.config()