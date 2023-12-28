#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int x, int y) // Constructor
    {
        real = x;
        img = y;
    }

    Complex operator+(Complex &c) // Operator overloading
    {
        Complex ans(0, 0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(1, 3);

    Complex c3 = c1 + c2;

    cout << endl
         << "Real: " << c3.real << "  Imaginary: " << c3.img << endl;

    return 0;
}