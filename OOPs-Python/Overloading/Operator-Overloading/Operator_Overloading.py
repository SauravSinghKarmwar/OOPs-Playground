'''
Operator Overloading allows you to define custom behavior
for built-in operators(+,-,*,/,etc.) when applied to 
instances of your own classes. 
In Python, operator overloading is achieved by defining
special methods in your class that start and end with 
double underscores (also known as "dunder" methods).
'''

'''
Here are some common dunder methods used for operator overloading in Python:
1.  __add__(self, other): Implement the addition (+) operator.
2.  __sub__(self, other): Implement the subtraction (-) operator.
3.  __mul__(self, other): Implement the multiplication (*) operator.
4.  __truediv__(self, other): Implement the division (/) operator.
5.  __floordiv__(self, other): Implement the floor division (//) operator.
6.  __mod__(self, other): Implement the modulo (%) operator.
7.  __pow__(self, other): Implement the exponentiation (**) operator.
8.  __lt__(self, other): Implement the less than (<) operator.
9.  __le__(self, other): Implement the less than or equal to (<=) operator.
10. __eq__(self, other): Implement the equality (==) operator.
11. __ne__(self, other): Implement the not equal to (!=) operator.
12. __gt__(self, other): Implement the greater than (>) operator.
13. __ge__(self, other): Implement the greater than or equal to (>=) operator.
'''

class Student:
    def __init__(self, m1, m2):
        self.m1 = m1
        self.m2 = m2

    def __add__(self, other):
        m1 = self.m1 + other.m1
        m2 = self.m2 + other.m2
        m3 = Student(m1, m2)

        return m3

    def __gt__(self, other):
        s1 = self.m1 + other.m1
        s2 = self.m2 + other.m2
        
        if s1 > s2:
            return True
        else:
            return False

    def __str__(self):
        return "{} {}".format(self.m1, self.m2)



s1 = Student(58, 69)
s2 = Student(60, 65)

s3 = s1 + s2

print(s3.m1)

if s1 > s2:
    print("s1 wins")
else:
    print("s2 wins")

a = 9
print(s2)