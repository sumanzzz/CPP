#include <iostream>

using namespace std;
class TIME
{
private:
    int hr;
    int minutes;
public:
    void getData(int hr, int minutes)
    {
        this->hr = hr;
        this->minutes = minutes;
    }
    TIME computeTime(TIME t1, TIME t2)
    {
        TIME r;
        int rem = (t1.minutes + t2.minutes) / 60;
        r.minutes = (t1.minutes + t2.minutes) % 60;
        r.hr = t1.hr + t2.hr + rem;
        return r;
    }
    void showData()
    {
        cout<<"The time is : "<<hr<<" : "<<minutes<<endl;
    }
};
int main()
{
    TIME t1, t2, t3;
    int hr, min;
    cout << "Enter details of time 1" << endl;
    cin >> hr >> min;
    t1.getData(hr, min);

    cout << "Enter details of time 2" << endl;
    cin >> hr >> min;
    t2.getData(hr, min);

    t3 =t1.computeTime(t1, t2);

    t3.showData();
}
