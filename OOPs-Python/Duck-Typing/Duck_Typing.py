'''
Duck typing is a style of typing where the type or the 
class of an object is determined by its behaviour rather
than its explicit type or inheritance.
"If it looks like a duck, swims like a duck, and quack
like a duck, then it probably is a duck."
'''

class VsCode:
    def execute(self):
        print("Compiling")
        print("Running")

class MyEditor:
    def execute(self):
        print("Spell Check")
        print("Convention Check")
        print("Compiling")
        print("Running")

class Laptop:
    def code(self, ide):
        ide.execute()

ide = MyEditor()

lap1 = Laptop()
lap1.code(ide)