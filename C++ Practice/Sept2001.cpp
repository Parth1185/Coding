#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    void input();
    void display();
// Complex operator + (Complex t)
// {
//     Complex temp;
//     temp.real = real + t.real;
//     temp.imag = imag + t.imag;
//     return temp;
// }

void operator + (Complex t)
{
    Complex temp;
    temp.real = real + t.real;
    temp.imag = imag + t.imag;
    temp.display();
}
Complex operator-()
{
    cout<<"Unary - overloaded\n";
    Complex temp;
    temp.real=-real;
    temp.imag=-imag;
    return temp;
}

};
void Complex::input()
{
    cout<<"Enter real and imaginary part : ";
    cin>>real>>imag;
}
void Complex ::display()
{
    cout<<real<<" + "<<imag<<" i"<<endl;
}

int main() {

    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c1+c2;
    // c3=c1+c2;
    // c3.display();
    c3=-c1;
    c3.display();

    
    return 0;
}