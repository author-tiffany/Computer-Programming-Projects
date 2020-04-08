// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 23th 2018
// Assignment:  Lecture Homework #4 Exercise #1
// Compiler:    Apple Xcode

// Description:  prompt for pricipal ir, and times it is compounded to print a rate
#include <iostream>
#include <iomanip>
#include <math.h> // need this to include pow
#include <stdio.h>      /* printf */

using namespace std;

int main()
{
    double principal; // holds the value for the loan amount
    int compoundTimes;// holds the value for rate for the interest per year
    double interest; // monthly interest rate which is annual divided by 12
    double  interestRate; // holds the value of number of payments
    double amount;
    cout << fixed << setprecision(2);

    cout << "Please enter principal: " ;
    cin >> principal;
    cout << "Please enter times compounded per year: " ;
    cin >> compoundTimes;
    cout << "Please enter the interest rate: ";
    cin >> interestRate;
    interest = interestRate/100;
    amount = principal * (pow(1+((interestRate)/(compoundTimes)),compoundTimes));
                           
                           
     cout << "interest rate: " << interestRate << "%" << endl;
    cout << "times compounded:" << compoundTimes << endl;
    cout << setprecision(2);
    cout << "principal: $" << principal << endl;
    cout << "interest: $" << (amount-principal)<< endl;
    cout << "amount in savings: $" << amount << endl; // the interest apid is the total amount paid back minus the initial loan amount
    
    return 0;
    
} //end int main()


