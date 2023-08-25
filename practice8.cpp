//Demonstrating the use of the put back and and peek stream functions

#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter a string: "<<endl;

    cin.get(ch);
    cout<<"After the first get statement,ch = "<<ch<<endl;
    cin.get(ch);
    cout<<"After the second get statement,ch = "<<ch<<endl;
    cin.putback(ch);
    cin.get(ch);
    cout<<"After the first put back and third get statements,ch = "<<ch<<endl;
    ch = cin.peek();
    cout<<"After the first peek statement,ch = "<<ch<<endl;
    cin.get(ch);
    cout<<"After the fourth get statement,ch = "<<ch<<endl;

    return 0;
}

