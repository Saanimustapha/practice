//program to illustrate the use of the get and ignore stream functions
#include <iostream>
using namespace std;

int main()
{
    char a,b,c;

    cin>>a;
    cin.get(b);
    cin.ignore();
    cin.get(c);

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;

}

