#include<iostream>
using namespace std;

class Time
{
    int hour,min, sec;

    public:
    void input();
    void display();
    Time add(Time);
};

void Time::input()
{
    cout << "Enter hour : ";
    cin >> hour;
    cout << "Enter Minutes : ";
    cin >> min;
    cout << "Enter seconds : ";
    cin >> sec;
}
void Time::display()
{
   cout << hour << " : " << min << " : " << sec << endl;
}


 
Time Time::add(Time t)
{
    Time result;
    result.sec = sec + t.sec;
    result.min = min + t.min + result.sec/60;
    result.hour = hour + t.hour + result.min / 60;
    result.min %= 60;
    result.sec %= 60;




    return result;

     // if(result.min>60)
    // {

    //     result.min = result.min %= 60;
    //     result.hour +=1;
    // }
}

int main()
{
    Time t1,t2,t3;
    t1.input();
    t2.input();

    t3 = t1.add(t2);
    t3.display();
    
    
}