#include <iostream>
using namespace std;

// Function to show the current balance
void showbalance(double balance) {
    cout << "Your balance is: " << balance << endl;
}

// Function to deposit money
double deposit() {
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        cout << "That's not a valid amount!" << endl;
        return 0;
    }
return 0;
}

// Function to withdraw money
double withdraw(double balance) {
    double amount = 0;
    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Not sufficient funds!" << endl;
        return 0; // No withdrawal
    } else if (amount < 0) {
        cout << "Enter a valid amount!" << endl;
        return 0; // No withdrawal
    } else {
        cout << "The amount withdrawn is: " << amount << endl;
        return amount; // Deduct amount from balance
    }
    return 0;
}

int main() {
    int choice = 0;
    double balance = 0;

    do {
        cout << "\n************************" << endl;
        cout << "Enter your choice: " << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Thanks for visiting!!" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
