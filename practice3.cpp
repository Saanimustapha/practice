/*One metric ton is approximately 2205 pounds. Write a program that
prompts the user to input the amount of rice, in pounds, in a bag. The
program outputs the number of bags needed to store one metric ton of rice.*/

#include<iostream>
using namespace std;

const int METRIC_TON_TO_POUND_FACTOR = 2205;

int main()
{
    int poundsPerBag,numberOfBags;

    cout<<Enter the amount of rice in pounds per bag: <<endl;
    cout<<endl;
    cin>>poundsPerBag;

    //Finding the amount of bags
    numberOfBags = METRIC_TON_TO_POUND_FACTOR / poundsPerBag;

    cout<<numberOfBags<< bags are needed to store one metric ton of rice.<<endl;

    return 0;
}
