'''
class : A class is a blueprint or template that defines
        the structure and behavior of objects. It is a 
        fundamental concept that allows you to create 
        objects with specific attributes and methods.
        In simpler terms, a class is like a blueprint 
        for creating objects of a particular type.
'''
# Attributes --> Variables
# Behaviour  --> Methods(Function)

class Computer:
        
        def config(self):
                print('i5, 16gb, 1TB')

com1 = Computer()
com2 = Computer()

Computer.config(com1)
Computer.config(com2)

com1.config()
com1.config()