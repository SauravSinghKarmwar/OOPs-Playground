#include <iostream>
using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << endl
             << "Parent class" << endl;
    }
};

class Child:public Parent{
    public:
    Child(){
        cout << endl << "Child class" << endl;
    }
};

int main()
{
    return 0;
}