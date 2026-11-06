#include <iostream>
#include <string>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display(const std::string& label) const {
        std::cout << label << ": " << real << " + " << imag << "i ";
    }
};

int main() {
    Complex c1(5, 2);
    Complex c2(3, 6);

    Complex sum = c1 + c2;

    c1.display("First Complex Number");
    c2.display("Second Complex Number");
    sum.display("Sum");
    std::cout << std::endl;

    return 0;
}