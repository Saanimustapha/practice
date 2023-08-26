/*Three employees in a company are up for a special pay increase. You are
given a file, say Ch3_Ex7Data.txt, with the following data:
Miller Andrew 65789.87 5
Green Sheila 75892.56 6
Sethi Amit 74900.50 6.1
Each input line consists of an employee’s last name, first name, current salary,
and percent pay increase. For example, in the first input line, the last name of
the employee is Miller, the first name is Andrew, the current salary is
65789.87, and the pay increase is 5%. Write a program that reads data from
the specified file and stores the output in the file Ch3_Ex7Output.dat.
For each employee, the data must be output in the following form:
firstName lastName updatedSalary. Format the output of decimal
numbers to two decimal places.*/

#include<iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inData;
    ofstream outData;

    string firstName, lastName;
    double currentSalary, newSalary, percentagePayIncrease;

    // Opening the files
    inData.open("EmployeeInputData(practice 16).dat");
    outData.open("EmployeeOutputData(practice 16).out");

    // Check if the files are opened successfully
    if (!inData)
    {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    if (!outData)
    {
        cout << "Error opening output file!" << endl;
        return 1;
    }

    // Read and process data for each employee
    while (inData >> lastName >> firstName >> currentSalary >> percentagePayIncrease)
    {
        newSalary = (percentagePayIncrease / 100 * currentSalary) + currentSalary;

        outData << fixed << showpoint << setprecision(2);
        outData << firstName << " " << lastName << " " << newSalary << endl;
    }

    // Closing the files
    inData.close();
    outData.close();

    //Reading data from a new input file into an already existing output file.

    // Opening the files
    inData.open("EmployeeInputData2(practice 16).dat");
    outData.open("EmployeeOutputData(practice 16).out",ios::app);

    // Check if the files are opened successfully
    if (!inData)
    {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    if (!outData)
    {
        cout << "Error opening output file!" << endl;
        return 1;
    }

    cout << "Files opened successfully!" << endl; // Debugging statement

     // Read and process data for each employee
    while (inData >> lastName >> firstName >> currentSalary >> percentagePayIncrease)
    {
        newSalary = (percentagePayIncrease / 100 * currentSalary) + currentSalary;

        outData << fixed << showpoint << setprecision(2);
        outData << firstName << " " << lastName << " " << newSalary << endl;
    }

    // Closing the files
    inData.close();
    outData.close();

    return 0;
}


