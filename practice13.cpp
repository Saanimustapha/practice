//Indicates the use of the getline function to input strings containing whitespaces.
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string message;

    cout<<"Enter a sentence in a single line"<<endl;
    getline(cin,message);

    cout<<setw(21)<<setfill('#')<<"Your string is \""<<message<<"\""<<endl;


    return 0;
 }

