#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << endl
             << "Parent class" << endl;
    }

    void show()
    {
        cout << endl
             << "Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << endl
             << "Child class" << endl;
    }

    void show()
    {
        cout << endl
             << "Child class" << endl;
    }
};

int main()
{
    Parent *p;
    Child c;

    p = &c;
    p->print();
    p->show();

    return 0;
}