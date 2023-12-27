#include <iostream>
using namespace std;

class Parent
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class Child1 : public Parent
{
    // x will remail public
    // y will remail protected
    // z will not be accessible
};

class Child2 : private Parent
{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class Child13 : protected Parent
{
    // x will be protected
    // y will be protected
    // z will be protected
};

int main()
{
    Parent p;
    p.x = 2;

    return 0;
}