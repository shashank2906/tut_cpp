#include <iostream>
#include <cstring>
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

    // cout<<p<<endl;

    ///////////////////////////////////// *************************************
    ///////////////////////////////////// *************************************
    ///////////////////////////////////// *************************************
    ///////////////////////////////////// *************************************
    ///////////////////////////////////// *************************************

    //////////////////////////   functions in strings
    /////////////////////////   string.h / cstring

    // 1. strcat(destination , source)    \\   strncat(destination , source , length)

    // char a[10] = "good ";
    // char b[20] = "morning";

    // strcat(a,b,3);

    // cout<<a<<endl;

    ////*****************************   strncat

    // char a[10] = "good ";
    // char b[20] = "morning";

    // strncat(a,b,3);

    // cout<<a<<endl;

    //2. strcpy(destination , source)   \\ strncpy(destination , source, length)

    // char a[10] = "good ";
    // char b[20] = "morning";

    // strcpy(a,b);

    // cout<<a<<endl;      //  the elements or characters from b are copied to a and the characters in a are removed

    // strncpy
    // char a[10] = "good ";
    // char b[20] = "morning";

    // strncpy(a,b,2);

    // cout<<a<<endl;   /// here only two characters are copied in the same

    //3. strstr(destination,source)

    // char a[10] = "morning";
    // char b[20] = "ning";

    // strstr(a,b);

    // cout<<strstr(a,b)<<endl;     // it used used to find two strings . it looks at b and try to find the same string from a that has the characyers of a

    //4. strchr(main,char)        \\ strrchr(main,char)

    // char a[10] = "morning";
    // char b[20] = "n";

    // cout<<strstr(a,b)<<endl;  // it is useed to find characters

    // strrchr

    // char a[10] = "morning";
    // char b[20] = "ning";

    // cout<<strrchr(a,'o')<<endl;  // it compares the characters from the right side

    //5. strcmp(str1,str2)                      it is used to compare two strings

    // char a[10] = "morning";
    // char b[20] = "ning";

    // cout<<strcmp(a,b)<<endl;   // the value tells the value of 1 shoeter or greater than 2
    // all are checked in alphabetical order
    // generally ascii codes of (a-b) is result

    //6. strtol(str1fr )  string to long
    //7. strtof(str1, 'NULL')  string to float

    // char s1[10] = "245";
    // char s2[10] = "213.453";

    // cout<<strtol(s1, NULL, 10)<<endl;
    // cout<<strtof(s2,NULL);

    ////////////////////////////////////8. tokeniser     strtok(str1,"=;")

    // char s1[20] = "x=10;y=20;z=35";
    // char *token = strtok(s1, "=;");

    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, "=;");
    // }


    ///////////////////////////////////////    TOKEN EXAMPLE 2

    // char s1[20] = "x=10;y=20;z=35";
    // char *token = strtok(s1, ";");

    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, ";");
    // }


    ///////////////////////////////////////    TOKEN EXAMPLE 3


    // char s1[20] = "x=10;y=20;z=35";
    // char *token = strtok(s1, "=?");

    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, "=?");
    // }

    ///////////////////////////////////////////     TOKEN EXAMPLE 4


    // char s1[20] = "x=10;y=20;z=35";
    // char *token = strtok(s1, "=?");

    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, "?=");
    // }

    
    ////////////////////////////////////////////   TOKEN EXAMPLE 5


    // char s1[20] = "x=10;y=20;z=35";
    // char *token = strtok(s1, "?");

    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, "?");
    // }




    return 0;
}
