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

class Child : public Parent // Single Inheritance
{
public:
    Child()
    {
        cout << endl
             << "Child class" << endl;
    }
};

class GrandChild : public Child // Mult-Level Inheritance
{
public:
    GrandChild()
    {
        cout << endl
             << "GrandChild class" << endl;
    }
};

int main()
{
    GrandChild G; // Object of Grandchild class

    return 0;
}