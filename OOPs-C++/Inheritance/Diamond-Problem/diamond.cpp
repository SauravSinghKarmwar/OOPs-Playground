// The Base class has multiple parent classes having a common Ancestor class

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

class Child1 : public Parent
{
public:
    Child1()
    {
        cout << endl
             << "Child1 class" << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout << endl
             << "Child2 class" << endl;
    }
};

class GrandChild : public Child1, public Child2
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
    GrandChild G; // Object of GrandChild class

    return 0;
}