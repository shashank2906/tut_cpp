// header files

#include <iostream> // system defined header files  generally comes with ther compiler :


//#include"this.h"     user defined header files :  we can make a file named this.h and the syatem will recognise and will nor give error :
using namespace std;

int main()
{
    //cout<<'hello world';   single commas not applicable gives character constant error :

    cout << "hello world" << endl;
    //char ayush = 's';     // space is a character :  char only takes the last character entered :
    //cout << ayush;

    int a = 4, b = 5;

    cout << "the value of a/b is " << a / b << endl;
    // arithmetic operators  : the division operator always gives the value in integer :
    //cout <<"the value of a++ is "<< a++ << endl;  : increse the value then print it :
    //cout <<"the value of ++a is "<< ++a << endl;   : print the value then increase it :
    //cout <<"the value of a-- is "<< a-- << endl;    : same as above
    //cout <<"the value of --a is "<< --a << endl;    : same as above
    //cout << "the value of a++++ is " << a++  << endl;
    //cout << "the value of a---- is " << a--  << endl;
    //cout << "the value of a++ is " << a++ << endl;

    // assignment operators

    // comparison operators

    cout <<"following are the comparison operators "<< endl;//
    //

    //cout<<"the value of a == b is "<< (a==b)<< endl;
    //cout<<"the value of a != b is "<< (a!=b)<< endl;
    //cout<<"the value of a >= b is "<< (a>=b)<< endl;
    //cout<<"the value of a <= b is "<< (a<=b)<< endl;
    //cout<<"the value of a > b is "<< (a>b)<< endl;
    //cout<<"the value of a > b is "<< (a<b)<< endl;







    return 0;
}

/*int main(int argc, char const *argv[])
{
    
    return 0;
}*/






























// There are two types of header files:
// 1. System header files: It comes with the compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


    return 0;
}
