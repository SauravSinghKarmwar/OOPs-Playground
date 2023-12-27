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

int main()
{
    Child1 c1; // Object of child1 class

    Child2 c2; // Object of child2 class

    return 0;
}