#include <iostream>
using namespace std;

int main()
{

    int c = 4500;
    float b = 2.30;
    int a = 3;

    //    float c = a%b;
    //   default for any decimal number is
    //  range of bool is infinite
    cout << sizeof(bool) << endl;
    return 0;
}
// *********************************************************************  //

#include <iostream>

using namespace std;

int main()
{
    int x = 5, y;
    y = x++ + ++x + ++x;
    cout << "Hello Maths" << y;

    return 0;
}

// **********************************************************************  //

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float x = 76372;
    float y = 10;

    cout << sizeof(6437647364736473 / 4738);

    return 0;
}

// **********************************************************************  //

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5, b = 4;
    // a = a+++++b;

    cout << a;
    return 0;
}

// **********************************************************************  //

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << int(13.7 / 4.8) << endl;
    cout << (int)13.66 / 4;

    return 0;
}

// **********************************************************************  //

#include <iostream>
using namespace std;

int a, b, sum;
void myFunction()
{
    //cout << "I just got executed!";
    sum = a + b;
    cout << sum;
}

int main()
{
    // double x;
    // cin>>x;

    // int a=4,b=6,z;
    // z=(a += b) + (a -= b);

    // cout<<z;
    // return 0;

    // int x,y;
    // cin>>x>>y;

    // if(x==y)cout<<"success bro";

    // if and elseif are logical (as a byproduct it gives cout or a function as a result )
    // it is an executable function but may or maynot be return type function .
    // else(it is always return type function if others donot apply , if written in the program )

    // //myFunction();

    // else if(x<2)
    // {

    //     cout<<"wooooooooooahhhhhhh";

    // }
    // //myFunction();
    // else if(x<y)
    // {

    //     cout<<"aaaahhhhhhh";

    // }
    //myFunction();

    // else
    // {

    //     cout<<"failure";

    // }

    //    return 0;
}

// binary bit operators
//
//
//

// **********************************************************************  //

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    // power function
    // bool a =true;
    // char l='hz';

    // cout<<sqrt(a)<<endl<<int()<<sizeof('x')<<'d5'<<l;
    //   return 0;
    // rand(2, 556);
    int b, h;
    cin >> b >> h;
    cout << "the area of the triangle is \n"
         << 0.5 * b * h << endl
         << M_PI;

    return 0;
}

// **********************************************************************  //

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cin >> n;

    //  loop for sum of n numbers

    for (int i = 0; i < n; i++)
    {
        sum = i + sum;
        //10sum+=i;
        //cout<<sum;
    }
    cout << sum;

    return 0;
}

// **********************************************************************  //
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    float x, y, z, n = 22 / 7.f, i = 078., kk = 13.5, ll = 4.9;
    cout << "Hellow folks\nLets caluculate the area of triangle; When the lenght of base and perpendicular to the base is given\n"
         << "print the base and perpendicular length";

    cin >> x >> y >> z;

    cout << "the area of triangle is " << (x * y) * 0.5 << endl
         << x << endl
         << y << endl
         << z
         << endl
         << x * 22 / 7 * x << endl
         << n << endl
         << i << endl
         << 44.f << endl
         << char(88) + 2 << endl
         << 'f' + 2
         << endl
         << (float)22 / 7 << endl
         << int(13.7 / 4.8) << endl
         << endl
         << (int)13.5 / 4.9
         << endl
         << int(x / y) << endl
         << (int)(x / y) << endl
         << int(kk / ll) << endl
         << (int)13.5 / 4.9 << endl
         << (double)22;

    return 0;
}
// **********************************************************************  //

// **********************************************************************  //

// **********************************************************************  //

// **********************************************************************  //

// **********************************************************************  //

// **********************************************************************  //

// **********************************************************************  //
