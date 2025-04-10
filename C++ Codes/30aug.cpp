//OPERATOR OVERLOADING
//2D VECTOR

#include<iostream>
using namespace std;

// class Vector2D
// {
//     private:
//     float x,y;

//     public:
//     //constructor
//     Vector2D(float x = 0 , float y = 0) : x(x) , y(y) {}

//     //overloading the + operator
//     Vector2D operator + (const Vector2D& rhs) const
//     {
//         return Vector2D ( x + rhs.x, y + rhs.y);
//     }
    
//     //display method
//     void display() const
//     {
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// int main()
// {
//     Vector2D v1(2.0 , 3.0) , v2(4.0 , 1.0);
//     Vector2D v3 = v1 + v2; //using overloaded + operator
//     v3.display(); //output : (6.0 , 4.0)
//     return 0;
// }

class Time
{
    private:
    int hours , minutes;

    public:
    //constructor
    Time(int h = 0 , int m = 0) : hours(h), minutes(m) {}

    //overloading the + operator
    Time operator + (const Time& rhs) const
    {
        Time result;
        result.minutes = minutes + rhs.minutes;
        result.hours = hours + rhs.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    //display method
    void display() const
    {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main()
{
    Time t1(2,50) , t2(1,20);
    Time t3 = t1 + t2; //using overloaded + operator
    t3.display();
    return 0;
}