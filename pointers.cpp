#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;

    cout << p[1] << endl;

    delete[] p;

    p = nullptr; // use of nullptr
    return 0;
}
