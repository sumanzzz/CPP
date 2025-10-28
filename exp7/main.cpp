#include <iostream>
#include <cstring>
using namespace std;
class STRNG
{
private:
    int len;
    char *name;
public:
    STRNG(){}

    STRNG(char s[]){
        len = strlen(s);
        name = new char[len +1];
        strcpy(name , s);
    }

    void join(STRNG s1 ,STRNG s2){
        len = s1.len + s2.len;
        name = new char[len +1];
        strcpy(name,s1.name);
        strcat(name,s2.name);
    }

    void showData(){
        cout<<name<<endl;
    }
};
int main()
{
    char str1[20];
    char str2[20];
    cout<<"Enter two Strings (str1 , str2): "<<endl;
    cin>>str1>>str2;
    STRNG s1(str1);
    cout<<"str1 : ";
    s1.showData();
    STRNG s2(str2);
    cout<<"str2 : ";
    s2.showData();

    STRNG s3;
    s3.join(s1,s2);
    cout<<"Concatnated string: "<<endl;
    s3.showData();
    return 0;
}
