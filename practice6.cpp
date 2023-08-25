/*Write a C++ program that prompts the user to input the elapsed time for
an event in seconds. The program then outputs the elapsed time in hours,
minutes, and seconds. (For example, if the elapsed time is 9630 seconds,
then the output is 2:40:30.)*/

#include<iostream>
using namespace std;

const int SECONDS_TO_HOURS_FACTOR = 3600;
const int SECONDS_TO_MINUTES_FACTOR = 60;

int main()
{
    int seconds,minutes,hours,remainderSeconds1,remainderSeconds2;

    cout<<"Enter the time elapsed for the event in seconds"<<endl;
    cout<<endl;
    cin>>seconds;

    hours = seconds / SECONDS_TO_HOURS_FACTOR;
    remainderSeconds1 = seconds % SECONDS_TO_HOURS_FACTOR;
    minutes = remainderSeconds1 / SECONDS_TO_MINUTES_FACTOR;
    remainderSeconds2 = remainderSeconds1 % SECONDS_TO_MINUTES_FACTOR;

    cout<<endl;
    cout<<"The time is "<<hours<<":"<<minutes<<":"<<remainderSeconds2<<endl;

    return 0;

}

