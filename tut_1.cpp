#include <iostream>
using namespace std;
// int backedup()
// {

//     cout << "hello shashank";

//     return 0;
// }

int main()
{
    //cout << "hello world \n" << endl;
    /*int a = 'ab';       tut_1.cpp:15:13: warning: multi-character character constant [-Wmultichar]
    //int a = 'ab';
    //   ^
    //1 warning generated.
    //hello world

    24930*/
    //cout << a;

    //char ayush;

    // int x,y,z;

    // z=x+y;
    // cout<<z;
    // random number generator
    // srand(0,20);
    // cout<<srand;

    //cout << ayush << endl;
    //ayush = 'noname';      warning: implicit conversion from 'int' to 'char' changes value from 1851878757 to 101

    //return 100000000000000;    warning: implicit conversion from 'long' to 'int' changes value from 100000000000000 to 276447232 [-Wconstant-conversion]
    //return 1000000000000000;

    // what does the term returning value mean

    // return 1000000;   success

    // return -1;   success

    //return 0.5;  warning: implicit conversion from 'double' to 'int' changes value from 0.5 to 0

    // cout << backedup();

    return 0;
}

// ************************************************************************ //
#include <iostream>
using namespace std;

// This program was created by Code With Harry
/* this
is 
a 
multi
line 
comment */
int main()
{
    int sum = 6;
    cout << "Hello world" << sum;
    return 0;
}

// ************************************************************************ //

#include <iostream>

using namespace std;
int glo = 6;
void sum()
{
    int a;
    cout << glo;
}

int main()
{
    int glo = 9;
    glo = 78;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;
    sum();
    cout << glo << is_true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<< b;
    // cout<<"\nThe value of pi is: "<<pi;
    // cout<<"\nThe value of c is: "<<c;
    return 0;
}

// ************************************************************************ //

// experimenting operators
#include <iostream>
using namespace std;

int main()
{
    // BITWISE OPERATORS

    //
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin >> num1;                          /* '>>' is called Extraction operator */

    cout << "Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin >> num2;                          /* '>>' is called Extraction operator */

    cout << "The sum is " << num1 + num2;

    return 0;
}

// ************************************************************************ //

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

    cout << "following are the comparison operators " << endl; //
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
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout << "Following are the comparison operators in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical or operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical not operator (!(a==b)) is:" << (!(a == b)) << endl;

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;
int c = 45;

int main()
{
    // by default the scope of any variable is local  :
    // the scope resolution operator is used to take global operator :

    // SCOPE RESOLUTION OPERATOR

    int a, b, c;
    cout << " enter the number a ";

    cin >> a >> b;
    c = a + b;

    cout << "the local variable c is " << c << endl;
    cout << " the global variable c is " << ::c << endl; // :: is called the scope resolution operator used for obtaining the global variable in any function :

    return 0;
}

#include <iostream>

using namespace std;

int c = 45;

int main()
{

    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    // *************Reference Variables****************
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting****************
    int a = 45;
    float b = 45.46;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}

// ************************************************************************ //

// ***************************     constants

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    //****************************     manipulators

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was: "<<a;
    // a = 45;
    // cout<<"The value of a is: "<<a;
    // Constants in C++
    // const int a = 3;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; // You will get an error because a is a constant
    // cout<<"The value of a is: "<<a<<endl;

    // Manipulators in C++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;
    return 0;
}

// ************************************************************************ //

#include <iostream>

using namespace std;

int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;

    // 1. Selection control structure: If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    cout << "Done with switch case";
    return 0;
}

// ************************************************************************ //

#include <iostream>

using namespace std;
int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++;

    // Syntax for for loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    // }

    //  Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }

    /* do While loop in C++*/
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);

    //  Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false);

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;

    // & ---> (Address of) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;
int o = 999;

int o = ++o;
int main()
{

    //    #include<iostream>

    // using namespace std;

    // int c = 45;

    // int main(){

    //     // *************Build in Data types****************
    //     // int a, b, c;
    //     // cout<<"Enter the value of a:"<<endl;
    //     // cin>>a;
    //     // cout<<"Enter the value of b:"<<endl;
    //     // cin>>b;
    //     // c = a + b;
    //     // cout<<"The sum is "<<c<<endl;
    cout << "The global c is " << ::o;

    //     // ************* Float, double and long double Literals****************
    //     // float d=34.4F;
    //     // long double e = 34.4L;
    //     // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //     // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    //     // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    //     // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //     // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    //     // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

    //     // *************Reference Variables****************
    //     // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    //     // float x = 455;
    //     // float & y = x;
    //     // cout<<x<<endl;
    //     // cout<<y<<endl;

    //     // *************Typecasting****************
    //     int a = 45;
    //     float b = 45.46;
    //     cout<<"The value of a is "<<(float)a<<endl;
    //     cout<<"The value of a is "<<float(a)<<endl;

    //     cout<<"The value of b is "<<(int)b<<endl;
    //     cout<<"The value of b is "<<int(b)<<endl;
    //     int c = int(b);

    //     cout<<"The expression is "<<a + b<<endl;
    //     cout<<"The expression is "<<a + int(b)<<endl;
    //     cout<<"The expression is "<<a + (int)b<<endl;

    //     return 0;
    // }

    // *****   double datatype is default in decimal number and takes 8 bytes
    // for other datatypes we can write { }

    // float f = 34.65;

    // int x=65538;
    // cout<<x<<endl<<sizeof(f)<<endl;
    return 0;
}

// ************************************************************************ //
#include <iostream>
using namespace std;

int main()
{
    int b = 7, h = 5;

    float area;

    area = b * h / 2;

    cout << area;
    return 0;
}

// ************************************************************************ //
#include <iostream>
using namespace std;
int main()
{

    //********************  getline is used in the case of string   ******************
    // string x;
    // getline(cin, x);

    // cout<<"HELLO"<<x<<endl;

    // **************************** cin.getline is defined only for characters not strings      *******
    // or we can also use cin.get(varname , no of characters)

    // char cool[20];
    // cin.getline(cool, 10);

    // cout<<cool;

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    float b = 10.5;

    float c;

    c = a + b;

    cout << (int)c << endl;

    return 0;
}

// ************************************************************************ //

#include <iostream>
using namespace std;

int main()
{

    cout << "hello world " << endl;

    int x = 5, y;

    y = ++x + ++x;

    cout << y;
    return 0;
}

// ************************************************************************ //

#include <iostream>

using namespace std;

int main()
{
    int x = 5, y;
    y = ++x + ++x - x++ + x++;
    cout << "Hello Maths" << y;

    return 0;
}
// ************************************************************************ //

// ************************************************************************ //

// ************************************************************************ //
