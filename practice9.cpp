//Demonstrating the fail state of the input stream
//For a test case, we input a double such as 45.31 into the variable number.
//45 is stored in number and then c++ tries to store the . in the int variable ch.
//since . is a character, it cannot be stored in ch and the input stream enters a fail state.

#include<iostream>
using namespace std;

int main()
{
    int number;
    int ch;

    cin>>number;
    cout<<"number is "<<number<<endl;

    cin.get(ch);
    cout<<"ch is "<<ch<<endl;

    return 0;

}
