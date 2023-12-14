# Object Oriented Programming in Python

''' OOP is a programming paradigm that focuses on organizing
    code into objects, which are instances of classes. Python
    is an object-oriented programming language that supports 
    OOP principles. '''

'''
Object: It is a fundamental concept that represents a
        real-world entity or an instance of a class. An
        object is a self-contained unit that combines data
        (attributes) and behavior (methods) related to a
        specific concept.
'''
# Example:
class BankAccount:
    def __init__(self, account_number, account_holder, balance=0):
        self.account_number = account_number
        self.account_holder = account_holder
        self.balance        = balance

    def deposit(self, amount):
        self.balance += amount
        print(f"Deposited {amount} into account {self.account_number}.\nNew balance: {self.balance}")

    def withdraw(self, amount):
        if self.balance >= amount:
            self.balance -= amount
            print(f"\nWithdraw {amount} from account {self.account_number}.\nNew balance: {self.balance}")
        else:
            print("\nInsufficient balance. Withdrawal canceled.")

    def check_balance(self):
        print(f"\nAccount {self.account_number} balance: {self.balance}")

# Create an object 'account1' from the class 'BankAccount'
account1 = BankAccount(account_number="00001", account_holder="S A U R A V")

# Deposit some money into the account 
account1.deposit(1000)

# Check the balance
account1.check_balance()

# Withdraw some money from the account
account1.withdraw(500)

# Check the balance again
account1.check_balance()