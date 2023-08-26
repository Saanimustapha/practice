//program to demonstrate the use of setw and setfill output manipulators.
//Also illustrates the left and right manipulators

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string nam1,nam2,nam3;
    nam1 = "saani";
    nam2 = "dora";
    nam3 = "assopia";

    cout<<"123456789"<<endl;
    cout<<setfill('#');
    cout<<setw(7)<<nam1<<endl<<endl;
    cout<<setw(5)<<nam2<<endl<<endl;
    cout<<setw(8)<<nam3<<endl<<endl<<endl;

    string name1,name2,name3;
    name1 = "joseph";
    name2 = "dennis";
    name3 = "zaidu";

    cout<<left<<endl;
    cout<<setw(7)<<name3<<endl<<endl;
    cout<<setw(8)<<setfill('*')<<name1<<endl<<endl;
    cout<<setw(7)<<name2<<endl;

    return 0;

}

