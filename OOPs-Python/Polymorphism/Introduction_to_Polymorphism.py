'''
Polymorphism is a fundamental concept in object-oriented
programming (OOP) that allows objects of different classes
to be treated as objects of a common superclass. 
It enables a single interface or method to handle objects
of different types, making code more flexible and reusable.
'''

class Animal:
    def make_sound(self):
        print("Generic animal sound")

class Dog(Animal):
    def make_sound(self):
        print("Woof!")

class Cat(Animal):
    def make_sound(self):
        print("Meow!")

def animal_sound(animal):
    animal.make_sound()


dog = Dog()
cat = Cat()

animal_sound(dog)
animal_sound(cat)