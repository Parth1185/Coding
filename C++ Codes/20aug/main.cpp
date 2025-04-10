#include <iostream>
#include<string>
using namespace std;

// class Book
// {
//     private:
//     string title;
//     string author;
//     public:
//     Book(const string t, const string a) : title(t), author(a) {}

//     //Display Book Inofrmation
//     void display()
//     {
//         cout << "Title : " << title << " , Author : " << author << endl;
//     }

//     //Function to modify the object(does not affect original)
//     // void mbv(Book b)    //modify by value
//     // {
//     //     b.title = "Modified Title";
//     //     b.author = "Modified Author";
//     // }


//     //Function to modify the object(affects original)
//     void mbr(Book & b)    //modify by reference
//     {
//         b.title = "Modified Title";
//         b.author = "Modified Author";
//     }

//     //Function to modify the object(affects original)
//     void mbp(Book * b)    //modify by pointer
//     {
//         b->title = "Modified Title";
//         b->author = "Modified Author";
//     }
// };
// int main()
// {
//     Book originalBook("1984", "George Orwell");
//     cout << "Original Book => ";
//     originalBook.display();
//     //pass by value
//     // originalBook.mbv(originalBook);
//     // cout << "After ModifyByValue => ";

//      //pass by reference
//     // originalBook.mbv(originalBook);
//     // cout << "After ModifyByReference => ";

//      //pass by pointer
//     originalBook.mbp(&originalBook);
//     cout << "After ModifyByPointer => ";
//     originalBook.display();
//     return 0;
// }


        //RETURNING AN OBJECT



// class Book
// {
//     private:
//     string title;
//     string author;
//     public:

//     //PARAMETRIZED CONSTRUCTOR
//     Book(const string t, const string a) : title(t), author(a) {}

//     //DEFAULT CONSTRUCTOR
//     Book : title("Unknown"), author("Unknown") {}

//     //Display Book Inofrmation
//     void display()
//     {
//         cout << "Title : " << title << " , Author : " << author << endl;
//     }
//     //FUNCTION THAT RETURNS AN OBJECT BY VALUE
//     Book createbook()
//     {
//         Book newBook("Brave New World", "Aldous Huxley");
//         return newBook;
//     }
// };
// int main()
// {
//     Book originalBook("1984", "George Orwell");
//     cout << "Original Book => ";
//     originalBook.display();

//     //call function that returns an object
//     Book returnedBook; 
//     returnedBook = originalBook.createbook();

//     cout << "Returned Book =>";
//     returnedBook.display();
//     return 0;
// }

// class A
// {
//     int x;
//     public:
//     A() {x=100; cout << x <<endl;}
//     void display() {cout << x << endl;}
// };
// int main()
// {
//     A obj; //100 //constructor called
//     A *obj1; // = &obj; // noconstructor
//     obj.display(); //100 //valid call
//     obj1->display(); //100 //runtime error
//     A *obj2 = &obj; //no constructor
//     obj2 -> display(); //valid call
//     return 0;
// }

class A{
    int x;
    A()
    {
        x=10;
        cout << "D C" << x << endl;
    }
};
int main()
{
    A obj;
    return 0;
}