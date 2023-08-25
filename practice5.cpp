/*A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
cartons of milk to a local grocery store. The cost of producing one liter of
milk is -bash.38, and the profit of each carton of milk is -bash.27. Write a
program that does the following:
a. Prompts the user to enter the total amount of milk produced in the
morning.
b. Outputs the number of milk cartons needed to hold milk. (Round your
answer to the nearest integer.)
c. Outputs the cost of producing milk.
d. Outputs the profit for producing milk.*/


#include<iostream>
using namespace std;

const double CARTON_TO_LITRES_FACTOR = 3.78;
const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

int main()
{
    double milkProduced,productionCost,profit;
    int  numberOfCartons;

    cout<<Enter the total amount of milk produced in the morning in liters.<<endl;
    cout<<endl;
    cin>>milkProduced;

    numberOfCartons = static_cast<int>(milkProduced / CARTON_TO_LITRES_FACTOR);
    cout<<The number of cartons needed to hold the milk is <<numberOfCartons<< cartons.<<endl;
    cout<<endl;

    productionCost = COST_PER_LITER * milkProduced;
    cout<<The cost of producing milk is <<productionCost<<endl;
    cout<<endl;

    profit = numberOfCartons * PROFIT_PER_CARTON;
    cout<<The profit on producing milk is <<profit<<endl;

    return 0;
}

