/*You found an exciting summer job for five weeks. It pays, say, 5.50
per hour. Suppose that the total tax you pay on your summer job
income is 14%. After paying the taxes, you spend 10% of your net
income to buy new clothes and other accessories for the next school
year and 1% to buy school supplies. After buying clothes and school
supplies, you use 25% of the remaining money to buy savings bonds.
For each dollar you spend to buy savings bonds, your parents spend
-bash.50 to buy additional savings bonds for you. Write a program that
prompts the user to enter the pay rate for an hour and the number
of hours you worked each week. The program then outputs the
following:
a. Your income before and after taxes from your summer job.
b. The money you spend on clothes and other accessories.
c. The money you spend on school supplies.
d. The money you spend to buy savings bonds.
e. The money your parents spend to buy additional savings bonds for
you.*/

#include<iostream>
using namespace std;

const int TOTAL_NUMBER_OF_WEEKS = 5;
const double TAX_RATE = 0.14;
const double clothesAndAccessoriesRate = 0.1;
const double schoolSuppliesRate = 0.01;
const double savingsBondsRate = 0.25;
const double parentsTopUpPerDollar = 0.50;

int main()
{
    int hoursWorkedPerWeek;
    double incomeBeforeTaxes,incomeAfterTaxes,payRatePerHour,totalTax;
    double clothesAndAccessoriesCost,schoolSuppliesCost,savingsBondsCost,parentsTopUpCost;

    cout<<Enter the amount paid per hour: <<endl;
    cout<<endl;
    cin>>payRatePerHour;
    cout<<Enter the number of hours worked each week: <<endl;
    cout<<endl;
    cin>>hoursWorkedPerWeek;

    incomeBeforeTaxes = hoursWorkedPerWeek * TOTAL_NUMBER_OF_WEEKS * payRatePerHour;
    cout<<Your income before taxes is: <<incomeBeforeTaxes<<endl;
    cout<<endl;

    totalTax = TAX_RATE * incomeBeforeTaxes;
    incomeAfterTaxes = incomeBeforeTaxes - totalTax;
    cout<<Your income after taxes is: <<incomeAfterTaxes<<endl;
    cout<<endl;

    clothesAndAccessoriesCost = clothesAndAccessoriesRate * incomeAfterTaxes;
    cout<<The money spent on clothes and other accessories is: <<clothesAndAccessoriesCost<<endl;
    cout<<endl;

    schoolSuppliesCost = schoolSuppliesRate * incomeAfterTaxes;
    cout<<The money spent on school supplies is: <<schoolSuppliesCost<<endl;
    cout<<endl;

    savingsBondsCost = savingsBondsRate *(incomeAfterTaxes - (clothesAndAccessoriesCost+schoolSuppliesCost));
    cout<<The amount spent buying savings bonds is: <<savingsBondsCost<<endl;
    cout<<endl;

    parentsTopUpCost = (static_cast<int>(savingsBondsCost)) * parentsTopUpPerDollar;
    cout<<The money spent by parents to buy additional savings bonds is: <<parentsTopUpCost<<endl;

    return 0;
}
