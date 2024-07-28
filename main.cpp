#include <iostream>
using namespace std;

// Show the options for the ATM
void show_menu() {
    cout << "1. Balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
}

int main() {
    int balance = 2500;
    int option;
    do {
        show_menu();
        cout << "Select option: ";
        cin >> option;

        switch (option) {
            
            case 1: //return the balance value
                cout << "Your balance is: " << balance << endl;
                break;

            
            case 2: //deposit value to your account
                int deposit;
                cout << "How much do you want to deposit to your account?" << endl;
                cin >> deposit;
                balance += deposit;
                break;

            case 3: //remove value from your account 
                int withdraw;
                cout << "How much do you want to withdraw from your account?" << endl;
                cin >> withdraw;
                if (withdraw <= balance) {
                    balance -= withdraw;
                } else {
                    cout << "Not enough money to withdraw." << endl;
                }
                break;

            case 4: //close the code
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    } while (option != 4);

    return 0;
}