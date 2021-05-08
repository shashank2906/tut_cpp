#include <iostream>
using namespace std;

int main()
{   //////////////////////////////////// pointer initialisation and nullptr
    // int *p = new int[5];
    // p[0] = 12;
    // p[1] = 13;

    // cout << p[1] << endl;

    // delete[] p;

    // p = nullptr; /////////////////////// use of nullptr



    /////////////////////////////////////  use of sizeof....

    // int size;
    // cout<<"enter number of elements";
    // cin>>size;
    // int A[size];

    // cout<<sizeof A<<endl;

    // size = 35; //////////////once an array is initialised then it cannot be changed 




    ////////////////////////////////////// once a pointer is initialised then first it should be deleted to make a new pointer
    // int *p = new int[20];
    // delete []p;

    // p = new int[40];




    /////////////////////////////////////// using all pointer related references

    int a = 10;
     int *p = &a;

     cout<<a<<endl;
     cout<<&a<<endl;
     cout<<p<<endl;
     cout<<&p<<endl;
     cout<<*p<<endl;


     ///////////////////////////////////
     












     return 0;
}
