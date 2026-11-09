// Scenario
// An electricity company wants to calculate customers' electricity bills.

// Class 1: Customer (Parent)
// - Customer name
// - Customer ID
// Class 2: ElectricityBill (Child)
// - Units consumed
// - Price per unit
// - Bill calculation
// - Display complete bill
#include <iostream>
#include <string>
using namespace std;

// Parent class
class Customer {
public:
    string name;
    int customerID;
};

// Child class
class ElectricityBill : public Customer {
public:
    int units;
    double pricePerUnit;
}
class totalbil : public ElectricityBill {
public:
    double totalBill;

    void calculateBill() {
        totalBill = units * pricePerUnit;
    }

    void display() {
        cout << "\n----- Electricity Bill -----" << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer ID: " << customerID << endl;
        cout << "Units: " << units << endl;
        cout << "Price Per Unit: " << pricePerUnit << endl;
        cout << "Total Bill: " << totalBill << endl;
    }
};

int main() {
    
    totalbil e1;
    e1.name = "moosa";
    e1.customerID = 123;
    e1.units = 100;
    e1.pricePerUnit = 0.5;
    e1.calculateBill();
    e1.display();
    return 0;
}