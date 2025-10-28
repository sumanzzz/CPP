#include <iostream>
#include <string>
using namespace std;

class Sample {
private:
    int a;
    float b;
    string c;

public:
    // Default Constructor
    Sample() {
        a = 2;
        b = 0.2;
        c = "ab";
    }

    // Parameterized + Default Argument Constructor (merged)
    Sample(int a, float b = 2.5, string c = "abc") {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    // Copy Constructor
    Sample(const Sample& s) {
        a = s.a;
        b = s.b;
        c = s.c;
    }

    void showData() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main() {
    int a;
    float b;
    string c;

    cout << "Enter value for a, b, c (int, float, string):" << endl;
    cin >> a >> b >> c;

    cout << "\nDefault constructor" << endl;
    Sample s1;
    s1.showData();

    cout << "\nParameterized constructor" << endl;
    Sample s2(a, b, c);
    s2.showData();

    cout << "\nCopy constructor" << endl;
    Sample s3(s2);
    s3.showData();

    cout << "\nDefault argument constructor" << endl;
    Sample s4(a);
    s4.showData();

    return 0;
}
