#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;

    // Default constructor - no args passed
    Rectangle()
    {
        l = 0;
        b = 0;
    }

    // Parameterized constructor - args passed
    Rectangle(int x, int y)
    {
        l = x;
        b = y;
    }

    // Copy constructor - Initialize an obj by another existing object
    Rectangle(Rectangle &r)
    {
        l = r.l;
        b = r.b;
    }

    // Destructor
    ~Rectangle()
    {
        cout << endl
             << "Destructor is called" << endl;
    }
};

int main()
{
    Rectangle *r1 = new Rectangle(); // Object1 - Uses default constructor

    cout << endl
         << "r1.l = "
         << r1->l << "  r1.b = " << r1->b << endl;

    Rectangle r2(3, 4); // Object2 - Uses Parameterized constructor

    cout << endl
         << "r2.l = "
         << r2.l << "  r2.b = " << r2.b << endl;

    Rectangle r3 = r2; // Object3 - Uses Copy constructor

    cout << endl
         << "r3.l = "
         << r3.l << "  r3.b = " << r3.b << endl;

    return 0;
}