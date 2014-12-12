// Lab 13.5 - Student Generated Code Assignments
//
//    the SavingsAccount class
//
//
// written by Walter B. Vaughan for CSC 134, section 200, Fall 2014
//  at Catawba Valley Community College

#include <iostream>
#include <cctype>    // for tolower()

class SavingsAccount {
private:
    int dollars, cents;
    void normalizeCents() {
        while (cents >= 100) {
            dollars++;
            cents -= 100;
        } while (cents < 0) {
            dollars--;
            cents += 100;
        }
    }
public:
    SavingsAccount(int d = 0, int c = 0) {
        dollars = d;
        cents = c;
        normalizeCents();
    }

    void deposit(int d, int c) {
        dollars += d;
        cents += c;
        normalizeCents();
    }
    void withdraw(int d, int c) {
        dollars -= d;
        cents -= c;
        normalizeCents();
    }
    void printBalance() const { // now with proper handling of negative values
        std::cout << "Balance = $";
        if (dollars < 0) {
            std::cout << dollars+1 << "." << -(cents-100) << '\n';
        } else {
            std::cout << dollars << "." << cents << '\n';
        }
    }
};

int main() {


    int dollars, cents;
    std::cout << "Please input the initial dollars\n";
    std::cin >> dollars;
    std::cout << "Please input the initial cents\n";
    std::cin >> cents;

    SavingsAccount bank1 = SavingsAccount(dollars, cents);
    SavingsAccount bank2 = SavingsAccount();

    const int d = 50;
    const int c = 24;

    bank1.withdraw(d,c);
    bank2.deposit(d,c);

    std::cout << "Transferring $" << d << '.' << c
              << " from your account to a new one.\n";

    bank1.printBalance();
    bank2.printBalance();

    return 0;
}
