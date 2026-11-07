// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int l, int w) {
//         length = l;
//         width = w;
//     }

//     int calculate_area() {
//         int area = length * width;
//         return area;
//     }

//     int calculate_perimeter() {
//         int perimeter = 2 * (length + width);
//         return perimeter;
//     }

//     void displayInfo() {
//         cout << "Length: " << length << endl;
//         cout << "Width: " << width << endl;
//         cout << "Area: " << calculate_area() << endl;
//         cout << "Perimeter: " << calculate_perimeter() << endl;
//     }
// };

// int main() {
//     Rectangle rect(5, 10);
//     rect.displayInfo();
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    int rollNo;
    float marks;

    void inputStudent() {
        inputPerson();

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;

    s1.inputStudent();
    s1.display();

    return 0;
}