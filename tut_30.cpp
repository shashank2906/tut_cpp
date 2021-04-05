#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,sum=0;
    cin>>n;

//  loop for sum of n numbers 

    for (int i = 0; i < n ; i++)
    {    
        sum = i+sum;
        //10sum+=i;
        //cout<<sum;


       
    }
    cout<<sum;
    
    return 0;
}

