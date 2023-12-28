#include <iostream>
using namespace std;

class Sum
{
public:
    void add(int x, int y)
    {
        int sum = x + y;
        cout << endl
             << "sum: " << sum << endl;
    }

    void add(int x, int y, int z)
    {
        int sum = x + y + z;
        cout << endl
             << "sum: " << sum << endl;
    }

    void add(float x, float y)
    {
        float sum = x + y;
        cout << endl
             << "sum: " << sum << endl;
    }
};

int main()
{
    Sum s;
    s.add(2, 3);
    s.add(2, 3, 8);
    s.add(float(3.4), float(2.7));

    return 0;
}