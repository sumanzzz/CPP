#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    void readData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    Complex operator-(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum, diff;

    cout << "Enter first complex number:\n";
    c1.readData();

    cout << "\nEnter second complex number:\n";
    c2.readData();

    sum = c1 + c2;
    diff = c1 - c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    cout << "\n\nSum: ";
    sum.display();

    cout << "\nDifference: ";
    diff.display();

    cout << endl;
    return 0;
}
