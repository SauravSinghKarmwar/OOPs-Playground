#include <iostream>
using namespace std;

// Create a class name 'Fruit'
class Fruit
{
public: // Access specifier
    string name;
    string color;
};

// Main function
int main()
{
    Fruit apple; // Object

    // Set properties of object
    apple.name = "Apple";
    apple.color = "Red";

    // Print properties
    cout << endl
         << "Name: " << apple.name << endl
         << "Color: " << apple.color << endl;

    Fruit *mango = new Fruit(); // New object using pointer

    // Use arrow operator for accessing properties of pointer object !required
    mango->name = "Mango";
    mango->color = "yellow";

    cout << endl
         << "Name: " << mango->name << endl
         << "Color: " << mango->color << endl;

    return 0;
}