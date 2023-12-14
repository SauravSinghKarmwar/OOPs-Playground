#include<iostream>
using std::string;

// Creating a class named Employee
class Employee {
    public:
        string Name;
        string Company;
        int Age;

        // Creating a fun/method 
        void IntroduceYourself() {
            std::cout<<"Name: "<<Name<<std::endl;
            std::cout<<"Company: "<<Company<<std::endl;
            std::cout<<"Age: "<<Age<<std::endl;
        }
};

int main()
{
    std::cout<<std::endl;   // Creating an empty line 

    // Creating a Object of class "Employee"
    Employee employee1;
    employee1.Name = "Kunal";
    employee1.Company = "Raj-Shree-Marbels";
    employee1.Age = 21;
    // Calling the method for first object
    employee1.IntroduceYourself();

    std::cout<<std::endl;   // Creating an empty line 

    // Creating 2nd object
    Employee employee2;
    employee2.Name = "Divakar";
    employee2.Company = "BJP";
    employee2.Age = 20;
    // Calling method on 2nd object
    employee2.IntroduceYourself();

    std::cout<<std::endl;   // Creating an empty line 
}