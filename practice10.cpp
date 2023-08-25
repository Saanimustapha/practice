#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double a,b,c;
    a = 3.45673;
    b = 25.764;
    c = 9.234;

    cout<<fixed; //using the fixed manipulator to output the values to a fixed decimal point
    cout<<a<<" "<<b<<" "<<c<<endl<<endl;

    cout.unsetf(ios::fixed); //using the unsetf function to deactivate the fixed function. Output is printed in default mode.
    cout<<a<<" "<<b<<" "<<c<<endl<<endl;

    cout<<scientific; //using the scientific manipulator to output values in scientific notation.
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
