#include <iostream>
#include <string>

using namespace std;
class STUDENT
{
private:
    int rollNo;
    string name;
    int year;
public:
    void getData(){
        cout<<"Enter student roll no :";cin>>rollNo;
        cout<<"Enter student name :";cin>>name;
        cout<<"Enter student year :";cin>>year;
    }
    void showData(){
        cout<<"Student roll mo : "<<rollNo<<endl;
        cout<<"Student name : "<<name<<endl;
        cout<<"Student year : "<<year<<endl;
    }
};

class MEDICAL: public STUDENT
{
private:
    string specialization;

public:
    void getMedicalData(){
        getData();
        cout<<"Enter Specialization :";cin>>specialization;
    }
    void showMwdicalData(){
        showData();
        cout<<"Student Specialization :"<<specialization<<endl;
    }
};


class ENGINEERING: public STUDENT
{
private:
    string department;

public:
    void getEngineeringData(){
        getData();
        cout<<"Enter department :";cin>>department;
    }
    void showEngineeringData(){
        showData();
        cout<<"Student Department :"<<department<<endl;
    }
};
int main()
{
    MEDICAL s1;
    ENGINEERING s2;
    cout<<"Enter medical student details :"<<endl;
    s1.getMedicalData();
    cout<<"Medical student details :"<<endl;
    s1.showMwdicalData();
    cout<<"====================================="<<endl;
    cout<<"Enter Engineering student details :"<<endl;
    s2.getEngineeringData();
    cout<<"Engineering student details :"<<endl;
    s2.showEngineeringData();
    return 0;
}
