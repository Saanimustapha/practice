/*Write a program that accepts as input the mass, in grams, and density, in
grams per cubic centimeters, and outputs the volume of the object using the
formula: volume = mass / density. Format your output to two decimal places.*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double mass,density,volume;

    cout<<"Enter the mass in grams: "<<endl;
    cin>>mass;
    cout<<"Enter the density: "<<endl;
    cin>>density;

    volume = mass/density;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The volume is :"<<volume<<"cm3"<<endl;

    //Disabling fixed manipulator for the rest of the outputs if any
    cout.unsetf(ios::fixed);

    return 0;
}

