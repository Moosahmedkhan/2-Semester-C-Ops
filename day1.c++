#include <iostream>
#include <string>
using namespace std;

class bankaccount {
public:
    string customer_name;
    int account_number;
    double balance;

    bankaccount(string name = "", int acc_num = 0, double bal = 0.0) {
        customer_name = name;
        account_numbe   r = acc_num;
        balance = bal;
    }

    void input() {
        cout << "Enter customer name: ";
        cin >> customer_name;
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() const {
        cout << "Customer Name: " << customer_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bankaccount b1;
    b1.input();
    b1.display();

    bankaccount b2("moosa", 12345, 1000.50);
    b2.display();

    return 0;
}