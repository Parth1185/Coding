// #include<iostream>
// using namespace std;

// class counter
// {
//     int count;
//     public:
//     counter(int c)
//     {
//         count = c;
//     }
//     void operator++() //Pre-increment operator
//     {
//         count++;
//     }
//     void operator++(int)    //Post-increment operator
//     {
//         count++;
//     }
//     void operator--()//Pre-decrement operator
//     {
//         count--;
//     }
//     void operator--(int)//Post-decrement operator
//     {
//         count--;
//     }
//     void display()
//     {
//         cout << count <<endl;
//     }
// };
// int main()
// {
//     counter obj(5);

//     ++obj;
//     obj.display(); //6

//     obj++;
//     obj.display(); //7

//     --obj;
//     obj.display(); //6

//     obj--;
//     obj.display(); //5

//     return 0;
// }


#include <iostream>
using namespace std;

class Date {
private:
int day, month, year;
public:
// Constructor
Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
// Overloading the == operator
bool operator==(const Date& rhs) const {
return day == rhs.day && month == rhs.month && year == rhs.year;
}
// Overloading the != operator
bool operator!=(const Date& rhs) const {
return !(*this == rhs);
}
// Overloading the < operator
bool operator<(const Date& rhs) const {
return (year < rhs.year) || (year == rhs.year && month < rhs.month) ||
(year == rhs.year && month == rhs.month && day < rhs.day);
}
// Overloading the > operator
bool operator>(const Date& rhs) const {
return (year > rhs.year) || (year == rhs.year && month > rhs.month) ||
(year == rhs.year && month == rhs.month && day > rhs.day);
}
// Overloading the <= operator
bool operator<=(const Date& rhs) const {
return !(*this > rhs);
}
// Overloading the >= operator
bool operator>=(const Date& rhs) const {
return !(*this < rhs);
}
// Display method
void display() const {
cout << day << "/" << month << "/" << year << endl;
}
};
int main() {
Date d1(15, 8, 2022), d2(23, 12, 2021), d3(15, 8, 2022);

cout << "1 : True & 2 : False" << endl;

cout << "d1 == d3: " << (d1 == d3) << endl; // Output: 1 (true)
cout << "d1 != d2: " << (d1 != d2) << endl; // Output: 1 (true)

cout << "d1 < d2: " << (d1 < d2) << endl; // Output: 0 (false)
cout << "d2 > d1: " << (d2 > d1) << endl; // Output: 1 (true)
cout << "d1 <= d3: " << (d1 <= d3) << endl; // Output: 1 (true)
cout << "d2 >= d1: " << (d2 >= d1) << endl; // Output: 1 (true)
return 0;
}

