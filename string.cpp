#include <iostream>
using namespace std;

int main()
{
    ///////////////////////////////// declaring a string
    ////////////// use char in datatypes ,   check with int and other datatypes

    // char s[] = {'h', 'e','l','l','o','\0', 'p', 'p','p'};

    // cout<<s<<endl;

    /////////////////////////////////// checking for ascii codes

    // char s[] ={66,67,68,69,60};

    // cout<<s;

    /////////////////////////////////// initialize and store something in a char string

    // char s[20];
    // cout<<"enter the value";
    // cin>>s;

    // cout<<" the value is "<<s<<endl; // check for different cases using spaces in between.

    //////////////////////////////////////  using getline function
    /////////////// getline functions takes the whole string including spaces

    // char s[20];
    // cout << "enter the value";
    // cin.get(s, 100);

    // cout << " the value is " << s << endl;

    ////////////////////////////////////////  using getline function

    // char s[20];
    // cout << "enter the value";
    // cin.getline(s, 100);

    // cout << " the value is " << s << endl; ////// difference between get and getline

    //////////////////////////////////////////

    // char s[20];
    // char s1[20];
    // cout << "enter the value";
    // cin.get(s, 100);
    // cout << " the value is " << s << endl;

    // cout << "enter the value again";
    // cin.getline(s1, 100);

    // cout << " the value is " << s1 << endl;

    ///////////////////////////////////////////  declaring strings through different types 
    
    // char x = 'a';

    // char s[10] = "hello";
    // char a[] = "hello";
    // char k[] = {'h','e','l','l','o','\0'};
    // char h[] = {65,66,67,68,69,'\0'};
    // char *i = "hello";

    // cout << i;


    ///////////////////////////////////////////// difference between get and getline in string 

    // char s[10];
    // cout<<"enter the number"<<endl;
    // cin>>s;

    // cout<<s<< endl;


    //  char p[20];
    // cout<<"enter the number"<<endl;
    // cin>>p;

    // cout<<p<< endl;
    

   //***************************************** result 
    //    cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // shashankrai@Shashanks-Air tut_cpp % cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // enter the number
    // shashank rai is
    // shashank
    // enter the number
    // rai





   ////////////////////////////////////////////////////   use of get in the above problem 
   

//    char s[10];
//     cout<<"enter the number"<<endl;
//     cin.get(s,10);

//     cout<<s<< endl;


//      char p[20];
//     cout<<"enter the number"<<endl;            ////// also look for range of get and getliune function
//     cin.get(p,20);

//     cout<<p<< endl;

    ////////******************************** result

    //     cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // shashankrai@Shashanks-Air tut_cpp % cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // enter the number
    // shashak rai
    // shashak r
    // enter the number
    // ai


    ////////////////////////////////////use of getline in above example 

    // char s[10];
    // cout<<"enter the number"<<endl;
    // cin.getline(s,10);

    // cout<<s<< endl;


    //  char p[20];
    // cout<<"enter the number"<<endl;            ////// also look for range of get and getliune function
    // cin.getline(p,20);

    // cout<<p<< endl;
    

    /////********************************* result

    //     cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // shashankrai@Shashanks-Air tut_cpp % cd "/Users/shashankrai/Desktop/tut_cpp/" && g++ string.cpp -o string && "/Users/shashankrai/Desktop/tut_cpp/"string
    // enter the number
    // shashank rai
    // shashank 
    // enter the number



    //////////////////////////////////////////   solving above problem 


    // char s[10];
    // cout<<"enter the number"<<endl;
    // cin.get(s,10);

    // cout<<s<< endl;

    // cin.ignore();   // this function is ot working here like in abdul bari video 


    // char p[20];
    // cout<<"enter the number"<<endl;            ////// also look for range of get and getliune function
    // cin.get(p,20);

    // cout<<p<< endl;











    ////////////////////////////////////////////



























































    return 0;
}
