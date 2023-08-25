/*Cindy uses the services of a brokerage firm to buy and sell stocks. The firm
charges 1.5% service charges on the total amount for each transaction, buy
or sell. When Cindy sells stocks, she would like to know if she gained or
lost on a particular investment. Write a program that allows Cindy to input
the number of shares sold, the purchase price of each share, and the selling
price of each share. The program outputs the amount invested, the total
service charges, amount gained or lost, and the amount received after selling
the stock*/

#include<iostream>
using namespace std;

int main()
{
    int sharesSold,purchasePricePerShare,sellingPricePerShare,amountInvested,serviceCharges,amountReturned,returnMargin;

    cout<<Enter the number of shares sold: <<endl;
    cout<<endl;
    cin>>sharesSold;
    cout<<Enter the purchase price of each share: <<endl;
    cout<<endl;
    cin>>purchasePricePerShare;
    cout<<Enter the selling price of each share: <<endl;
    cout<<endl;
    cin>>sellingPricePerShare;

    amountInvested = purchasePricePerShare * sharesSold;
    cout<<The amount invested is: <<amountInvested<<endl;
    cout<<endl;
    amountReturned = sellingPricePerShare * sharesSold;
    serviceCharges = 0.015 * amountInvested;
    cout<<The total service charges is: <<serviceCharges<<endl;
    cout<<endl;
    returnMargin = amountReturned - amountInvested;

    if (returnMargin > 0)
    {
        cout<<The amount gained is: <<returnMargin<<endl;
        cout<<endl;
    }
    else if (returnMargin < 0)
    {
        cout<<The amount lost is: <<-1 * returnMargin<<endl;
        cout<<endl;
    }

    cout<<The amount received after selling is: <<amountReturned<<endl;


    return 0;

}

