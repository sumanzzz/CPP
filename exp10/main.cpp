#include <iostream>

using namespace std;
class Shape{
public:
    double x,y;
    void getData();
    virtual void dispArea() = 0;
};

void Shape::getData(){
    cout<<"Enter the  values:"<<endl;
    cin>>x>>y;
}

class Triangle:public Shape{
public:
    void dispArea();
};
void Triangle::dispArea(){
    cout<<"Area of triangle is:";
    cout<<0.5 * x * y<<endl;
}

class Rectangle:public Shape{
public:
    void dispArea();
};
void Rectangle::dispArea(){
    cout<<"Area of Rectangle is:";
    cout<< x * y<<endl;
}
int main()
{
    int ch;
    char c;
    Triangle tr;
    Rectangle rec;

    Shape *sh;
    sh = &tr;
    sh->getData();
    sh->dispArea();

    sh = &rec;
    sh->getData();
    sh->dispArea();
    return 0;
}
