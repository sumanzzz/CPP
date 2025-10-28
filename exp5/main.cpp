#include <iostream>

using namespace std;
class ALPHA
{
private:
    int x;

public:
    ALPHA(int x){
        this->x = x;
        cout<<"Alpha Constructor"<<endl;
    }
    void displayAlpha(){
        cout<<x<<endl;
    }
};
class BETA
{
private:
    int y;

public:
    BETA(int y){
        this->y = y;
        cout<<"Beta Constructor"<<endl;
    }
    void displayBeta(){
        cout<<y<<endl;
    }
};
class GAMMA:public ALPHA,public BETA
{
private:
    int z;

public:
    GAMMA(int x,int y,int z):ALPHA(x),BETA(y){
        this->z = z;
        cout<<"Gamma Constructor"<<endl;
    }
    void displayGamma(){
    cout<<z<<endl;
    }
};
int main()
{
    int a , b , c;
    cout<<"Enter value for class Alpha ,Beta and Gamma"<<endl;
    cin>>a>>b>>c;
    GAMMA g(a,b,c);
    g.displayAlpha();
    g.displayGamma();
    g.displayBeta();

    return 0;
}
