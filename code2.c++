#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int calculate_area() {
        int area = length * width;
        return area;
    }

    int calculate_perimeter() {
        int perimeter = 2 * (length + width);
        return perimeter;
    }

    void displayInfo() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculate_area() << endl;
        cout << "Perimeter: " << calculate_perimeter() << endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    rect.displayInfo();
    return 0;
}