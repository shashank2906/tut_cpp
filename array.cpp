#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //////////////////////////// checking for garbage values in for each loop

    // int A[6];

    // for (int x : A)
    // {
    //     cout << x<<endl;
    // }









    ///////////////////////////// taking float array and integer in for each loop 
    // it typecasts and gives out results in integer form 
    // for float it gives in float 




    // float A[3] = {3.55, 3.65f, 2.3f};

    // for (int x : A)
    // {
    //     cout << x<<endl;
    // }










    //////////////////////////// checking typecasting for char


    // float A[3] = {3.55, 3.65f, 2.3f};

    // for (char x : A)
    // {
    //     cout << x<<endl;
    // }






    //////////////////////////// use of auto in foreach loop

    // float A[3] = {3.55, 3.65f, 2.3f};

    // for (auto x : A)
    // {
    //     cout << x<<endl;
    // }





    //////////////////////////////// using characters in for each loop
    //////// learn about ascii codes for 'hex'  and 'char'


    char A[4] = {'A',66,44,'B'};

    for (auto x : A)
    {
        cout << x<<endl;
    }





    return 0;
}
