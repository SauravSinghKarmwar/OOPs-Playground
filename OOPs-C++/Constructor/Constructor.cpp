/*  A constructor in C++ is a special member 
    function of a class that gets called 
    automaticallywhen an object of the class 
    is created. It is responsible for initializing
    the object's attributes and setting up any 
    necessary resources. 
    Constructors ensure that the object is in
    a valid state after its creation. 
    They have same name as the class and do 
    not have a return type, not even 'void'. 
*/

#include <iostream>
using namespace std;

class Reactangle {
    private:
        double width;
        double height;

    public:
        // Default Constructor
        Reactangle() {
            width = 0.0;
            height = 0.0;
            cout << "Default constructor called" << endl;
        }

        // Parameterized Constructor
        Reactangle(double w, double h) {
            width = w;
            height = h;
            cout<<"Parameterized constructor called" << endl;
        }

        // Copy Constructor 
        Reactangle(const Reactangle& other) {
            width = other.width;
            height = other.height;
            cout<<"Copy constructor called"<<endl;
        }

        // Destructor
        ~Reactangle() {
            cout<<"Destructor called"<<endl;
        }

        double calculateArea() {
            return width * height;
        }
};

int main() {
    Reactangle defaultReact; // Calls the default constructor
    Reactangle customReact(4.0, 5.0); // Calls the parameterized construtor 
    Reactangle copiedReact = customReact; // Calls the copy constructor

    cout<<"Area of customRect: "<< customReact.calculateArea() << endl;
    cout<<"Area of copiedRect: "<< copiedReact.calculateArea() << endl;

    return 0; // Destructors are called when objects go out of scope
}