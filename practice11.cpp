//program to demonstrate the use of setprecision, fixed, showpoint, setw.
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    float a,b,c;
    float d,e;
    a = 2.347812;
    b = 9.234512;
    c = 34.215632;

    d = 5;
    e = 9;

    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"a = "<<a<<endl<<endl;
    cout<<"b = "<<b<<endl<<endl;
    cout<<"c = "<<c<<endl<<endl;
    cout<<"d = "<<d<<endl<<endl;
    cout<<"e = "<<e<<endl<<endl;

    return 0;
}
