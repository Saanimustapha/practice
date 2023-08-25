/program that converts length in feet and inches to centimeters

#include<iostream>
using namespace std;

const int INCHES_TO_FEET_FACTOR = 12;
const int FOOT_TO_CENTIMETER_FACTOR = 30;


int main()
{
    int lengthInFeet,lengthInInches,inchesToFeet,totalLengthInFeet,totalLengthInCentimeters;

    cout<<The program converts a length expressed in feet and inches to centimeters<<endl;
    cout<<endl;
    cout<<Enter the component of the length in feet: <<endl;
    cin>>lengthInFeet;
    cout<<endl;
    cout<<Enter the component of the length in inches: <<endl;
    cin>>lengthInInches;

    inchesToFeet = lengthInInches/INCHES_TO_FEET_FACTOR;
    totalLengthInFeet = lengthInFeet + inchesToFeet;
    totalLengthInCentimeters = totalLengthInFeet * FOOT_TO_CENTIMETER_FACTOR;

    cout<<endl;
    cout<<The length in centimeters is: <<totalLengthInCentimeters<<cm<<endl;

    return 0;

}

