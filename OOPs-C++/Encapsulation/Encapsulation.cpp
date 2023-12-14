/*  Encapsulation is one of the fundamental
    principle of Object-Oriented Programming
    (OOP). It refers to the practice of building
    data(attributes) and the methods(functions)
    that operate on the data into a single unit
    called a class.
    The main idea behind encapsulation is to 
    hide the interacting with it. This helps 
    in controlling access to the data and 
    ensures that the object remains in a valid 
    and consistent state.
*/

#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;
    
    public:
        // Constructor
        BankAccount(string accNum, double initBalance) {
            accountNumber = accNum;
            balance = initBalance;
        }

        // Public methods to interact with private members
        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout<<"Depsited: $" << amount << endl;
            }
            else{
                cout <<"Invalid amount for deposit" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && balance >= amount) {
                balance -= amount;
                cout << "Withdrawn: $"<<amount<<endl;
            }else{
                cout<<"Insufficient balance or invalid amount for withdrawal" << endl;
            }
        }

        void displayBalance() {
            cout << "Account Number: "<< accountNumber << endl;
            cout <<"Balance: $" << balance << endl;
        }
};

int main() {
    BankAccount account("6262172262", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.displayBalance();

    return 0;
}
