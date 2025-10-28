#include <iostream>

using namespace std;
class COMPLEX
{
private:
    int real;
    int imag;
public:
    void getData(){
        cout<<"Enter the real and imaginary part of complex number ( a + ib ):"<<endl;
        cin>>real>>imag;
    }
    void showData(){
        cout<<"The complex number is : "<<real<<" + " <<"i"<<imag<<endl;
    }

    friend COMPLEX add(int a , COMPLEX c1);
    friend COMPLEX add(COMPLEX c1 , COMPLEX c2);
};

COMPLEX add(int a , COMPLEX c1){
    COMPLEX res;
    res.real = a + c1.real;
    res.imag = c1.imag;
    return res;
}
COMPLEX add(COMPLEX c1 , COMPLEX c2){
    COMPLEX res;
    res.real = c1.real + c2.real;
    res.imag = c1.imag + c2.imag;
    return res;
}
int main()
{
    COMPLEX c1 , c2, c3;
    c1.getData();
    c1.showData();
    c2.getData();
    c2.showData();
    c3 = add(c1,c2);
    c3.showData();
    return 0;
}
