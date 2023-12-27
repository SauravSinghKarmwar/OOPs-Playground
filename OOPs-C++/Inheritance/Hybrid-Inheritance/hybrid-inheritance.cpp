#include <iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout << endl
             << "Parent1 class" << endl;
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout << endl
             << "Parent2 class" << endl;
    }
};

// Multiple Inheritance
class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << endl
             << "Child class" << endl;
    }
};

class GrandChild : public Child
{
public:
    GrandChild()
    {
        cout << endl
             << "Grand Child" << endl;
    }
};

int main()
{
    GrandChild G; // Object of Grandchild class

    return 0;
}