#include <iostream>

using namespace std;
class Bank
{
    private:
        char name[25];
        char accno[10];
        float balance;
    public:
        void getData(){
            cout<<"Enter the account holder name:";
            cin>>name;
            cout<<"Enter account number:";
            cin>>accno;
            cout<<"Enter the balance:";
            cin>>balance;
            cout<<endl;
        }
        void deposit(){
            float dep;
            cout<<"Enter the amount to deposit:";
            cin>>dep;
            balance += dep;
            cout<<"Total balance after deposition  : "<<balance<<endl;
        }
        void withdraw(){
            float with;

            cout<<"Enter the amount to withdraw:";
            cin>>with;
            if(with > balance){
                cout<<"Insufficient balance.request denied!"<<endl;
                cout<<"your Balance is : "<<balance<<endl;
            }
            else{
                balance -= with;
                cout<<"Total balance after withdrawal : "<<balance<<endl;
            }
        }
        void display(){
            cout<<"Account holder name : "<<name<<endl;
            cout<<"Total balance : "<<balance<<endl;
        }
};
int main(){
    Bank b;
    b.getData();
    b.display();
    b.deposit();
    b.withdraw();
    return 0;
}
