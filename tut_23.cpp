#include<iostream> 
#include<cmath>
using namespace std;
int main(){
    char a='■';
    signed char d='■';
    unsigned char x='■';
    char p='n';
    int z='M_PI',mo='⌠';
    int b=55.55,c=87;
    c -=b+2;
    cout<<char(-2)<<endl<<a+1<<endl<<sqrt(21)<<endl<<pow(2,pow(3,2))
    <<endl<<sizeof(sqrt(-21.7878))<<endl<<sizeof(565.9898l)
    <<endl<<int(a)<<endl<<int(d)<<endl<<int(x)<<endl<<869.434f*2<<endl
<<pow(p,2)<<endl<<M_PI<<endl<<endl<<sizeof(M_PI)<<endl<<z<<endl<<b<<endl<<char(z)<<endl<<mo<<endl<<char(mo)
<<endl<<c<<endl<<++++c<<endl<<++b + b++;
    return 0;
}