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
    void open(int d, int c) {
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
    void printBalance() const {
        std::cout << "Dollars = " << dollars << " Cents = " << cents << '\n';
    }
};

int main() {
    SavingsAccount bank1;

    int dollars, cents;
    std::cout << "Please input the initial dollars\n";
    std::cin >> dollars;
    std::cout << "Please input the initial cents\n";
    std::cin >> cents;

    bank1.open(dollars, cents);

    char selection;
    std::cout << "Would you like to make a deposit? Y or y for yes\n";
    std::cin >> selection;
    while (tolower(selection) == 'y') {
        std::cout << "Please input the dollars to be deposited\n";
        std::cin >> dollars;
        std::cout << "Please input the cents to be deposited\n";
        std::cin >> cents;
        bank1.deposit(dollars, cents);
        std::cout << "Would you like to make a deposit? Y or y for yes\n";
        std::cin >> selection;
    }

    std::cout << "Would you like to make a withdrawal Y or y for yes\n";
    std::cin >> selection;
    while (tolower(selection) == 'y') {
        std::cout << "Please input the dollars to be withdrawn\n";
        std::cin >> dollars;
        std::cout << "Please input the cents to be withdrawn\n";
        std::cin >> cents;
        bank1.withdraw(dollars, cents);
        std::cout << "Would you like to make a withdrawal Y or y for yes\n";
        std::cin >> selection;
    }


    bank1.printBalance();

    return 0;
}
