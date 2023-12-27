#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int y)
    {
        x = y;
    }

    friend void print(A &obj); // Declare a friend function
};

void print(A &obj)
{
    cout << endl
         << "x = " << obj.x << endl;
}

int main()
{
    A obj(5);
    print(obj);

    return 0;
}