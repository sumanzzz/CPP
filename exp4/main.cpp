#include <iostream>

using namespace std;
class EMPLOYEE
{
private:
    int empId;
    string empName;
    float salary;

public:
     void getData(){
        cout<<"Enter employree Details (Employee ID , Employee Name ,Salary):"<<endl;
        cin>>empId>>empName>>salary;
    }
     void showData(){
        cout<<"Employee ID : "<<empId<<endl;
        cout<<"Employee Name : "<<empName<<endl;
        cout<<"Employee salary : "<<salary<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of employees : ";cin>>n;
    EMPLOYEE emp[n];
    for(int i=0;i<=n;i++){
        cout<<"Enter details for Employee "<<i+1<<endl;
        emp[i].getData();
    }
    for(int i=0;i<n;i++){
        cout<<"Employee "<<i+1<<" Details"<<endl;
        emp[i].showData();
    }
    return 0;
}
