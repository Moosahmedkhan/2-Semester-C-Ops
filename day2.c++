// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
// private:
//     string name;
//     string employeeID;
//     double salary;

// public:
//     // Setters
//     void setName(string n) { 
//         name = n; 
//     }
    
//     void setEmployeeID(string id) { 
//         employeeID = id; 
//     }
    
//     // Task 4: Modified setSalary with validation (Negative salary not allowed)
//     void setSalary(double s) { 
//         if (s >= 0) {
//             salary = s;
//             cout << "[Success] Salary $" << s << " accepted and updated successfully.\n";
//         } else {
//             cout << "[Error] Invalid Salary ($" << s << "). Salary cannot be negative. Value not changed.\n";
//         }
//     }

//     // Getters
//     string getName() { 
//         return name; 
//     }
    
//     string getEmployeeID() { 
//         return employeeID; 
//     }
    
//     double getSalary() { 
//         return salary; 
//     }

//     // Display Information
//     void displayInfo() {
//         cout << "Name: " << name << "\n";
//         cout << "Employee ID: " << employeeID << "\n";
//         cout << "Salary: $" << salary << "\n";
//     }
// };

// int main() {
//     Employee e1;
//     e1.setName("John Doe");
//     e1.setEmployeeID("EMP-409");

//     // Test 1: Testing an INVALID Salary (Negative)
//     cout << "--- Test 1: Invalid Salary ---\n";
//     e1.setSalary(-1500.00);

//     // Test 2: Testing a VALID Salary
//     cout << "\n--- Test 2: Valid Salary ---\n";
//     e1.setSalary(65000.00);

//     // Display final employee information
//     cout << "\n--- Final Employee Information ---\n";
//     e1.displayInfo();

//     return 0;
// }
// #include <iostream> 
// using namespace std;
//  class Student{ 
// private:
// string name; int age;
// public:
// Student()
// {
// name = "Unknown"; age = 0;
// cout << "Default Constructor Called" << endl;
// }
// void display()
// {cout << "Name: " << name << endl; cout << "Age: " << age << endl;
// }
// };
// int main()
// {
 
// Student s1; s1.display(); return 0;
// }
// #include <iostream>
// using namespace std;

// class Student {
// private:
//     string name;
//     int age;
//     string program;

// public:
//     // Parameterized Constructor
//     Student(string n, int a, string p) {
//         name = n;
//         age = a;
//         program = p;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Program: " << program << endl;
//         cout << "------------------------" << endl;
//     }
// };

// int main() {
//     // Creating two student objects with different information
//     Student s1("Ali", 20, "Computer Science");
//     Student s2("Sara", 21, "Artificial Intelligence");

//     // Displaying the information of both objects
//     s1.display();
//     s2.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     string accountNumber;
//     string accountHolder;
//     double balance;

// public:
//     // 1. Default Constructor
//     BankAccount() {
//         accountNumber = "ACC-0000";
//         accountHolder = "Unknown";
//         balance = 0.0;
//     }

//     // 2. Parameterized Constructor
//     BankAccount(string accNum, string holder, double bal) {
//         accountNumber = accNum;
//         accountHolder = holder;
//         balance = bal;
//     }

//     // 3. Display Function
//     void display() {
//         cout << "Account Number : " << accountNumber << endl;
//         cout << "Account Holder : " << accountHolder << endl;
//         cout << "Balance        : Rs. " << balance << endl;
//         cout << "------------------------" << endl;
//     }

//     // 4. Destructor
//     ~BankAccount() {
//         cout << "Destructor called for account: " << accountNumber << endl;
//     }
// };

// int main() {
//     // Creating objects using both constructors
//     BankAccount acc1;                                      // Uses default constructor
//     BankAccount acc2("PK12SCBL00012345678901", "Musa Ahmed", 85000.0); // Uses parameterized constructor

//     // Displaying their information
//     cout << "--- Bank Account Details ---" << endl;
//     acc1.display();
//     acc2.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class Sum {
private:
    int x, y;

public:
    // Move the cin and prompt inside the class method
    void get() {
        cout << "Enter 1st and 2nd value: ";
        cin >> x >> y;
    }

    void add() {
        cout << "Sum = " << x + y << endl;
    }
};

int main() {
    Sum s    // Create an object of Sum
    s.get();    // Handles input inside the class
    s.add();    // Calculates and displays the sum

    return 0;
}