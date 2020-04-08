// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 18th 2018
// Assignment:  Lecture Homework #2 Exercise #2
// Compiler:    Apple Xcode

// Description:  prompt for each of the three values indicated in the problem (the loan amount, the annual interest rate, and the number of payments), perform the calculations, and then print a report similar

#include <iostream>
#include <iomanip>
#include <math.h> // need this to include pow
#include <stdio.h>      /* printf */

using namespace std;

int main()
{
    double loanAmount; // holds the value for the loan amount
    double annualInterest;// holds the value for rate for the interest per year
    double monthlyInterest; // monthly interest rate which is annual divided by 12
    int numberPayment; // holds the value of number of payments
    double payment; // monthly payment
    double amountPaid;
    
    cout << "Please enter an annual interest rate: " ;
    cin >> annualInterest;
    cout << "Please enter a loan amount: " ;
    cin >> loanAmount;
    cout << "Please enter the number of payments: ";
    cin >> numberPayment;
    
    monthlyInterest = annualInterest / 1200.00;
    payment = (loanAmount * pow(monthlyInterest+1, numberPayment) * monthlyInterest)/ (pow(monthlyInterest+1, numberPayment) - 1) ;
    amountPaid = payment * numberPayment; // will calculate the amount paid back
    
    cout << fixed << setprecision(2);
    cout << "\nloan amount: " << loanAmount << endl;
    cout << "monthly interest rate: " << monthlyInterest * 100 << "%" << endl;
    cout << "number of payments:" << numberPayment << endl;
    cout << "Monthly Payment: $" << payment << endl;
    cout << "Amount paid back: $" << amountPaid << endl;
    cout << "interest paid: $" << amountPaid - loanAmount << endl; // the interest apid is the total amount paid back minus the initial loan amount
    
    return 0;
    
} //end int main()


