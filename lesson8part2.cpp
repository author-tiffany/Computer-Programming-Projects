//
//  main.cpp
//  Lesson8part2
//
//  Created by Tiffany Lourdraj on 11/10/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
// purpose: The formula used needs the future value (F) and annual interest rate (r) and the number of years (n) the money will sit in the account, unchanged. You will be calculating the present value (P).



# include <fstream>// input stream
#include <iostream>
#include <iomanip>
#include<math.h>// calculate for math statements

using namespace std;



double readFuture()// function for reading in the future value of the money made
{
    double futureValue=-1;// set to -1 to go thru the while loop
    while(futureValue<=0)// the while loop for the future value
    {
        cout << "Enter future value\n";// prompts the user to enter the future value
        cin >> futureValue;// takes in the future value
        
        if( futureValue<=0)// if statement to run thru if the user inputs a value less than or equal 0
        {
            cout << "The future value must be greater than zero\n";
        }
    }
    return futureValue;
    
    
}

double readAnnualInterest()
{
    double annualInterest=-1;
    while(annualInterest<=0)
    {
        cout << "Enter annual interest rate\n";
        cin >> annualInterest;
        
        if( annualInterest<=0)// if statement to run thru if the user inputs a value less than or equal 0
        {
            cout << "The annual interest rate must be greater than zero\n";
        }
    }
    return annualInterest;
    
    
}
int readYears()
{
    int numberYears=-1;
    while(numberYears<=0)
    {
        cout << "Enter number of years\n";
        cin >> numberYears;
        
        if( numberYears<=0)// if statement to run thru if the user inputs a value less than or equal 0
        {
            cout << "The number of years must be greater than zero\n";// ouput if hte years in invalid
        }
    }
    return numberYears;// end of the function of the number of years
    
    
}
 double calculatePresentValue(double futureValue, double interestRate ,int numberYears)// takes in the for the parameters for the future
{
      double presentValue;
    presentValue= futureValue/ ((pow((1.00+(interestRate/100.00)), numberYears)));// calculation for the puresent value after the intereest rate and n which is the number of years
    return presentValue;// end of the functions
    
}

void displayValues( double presentValue, double interestRate, double futureValue, int numberYears)// parameters are set to this in this function to take in all the values to output the values
{
    cout << "Present value: $" << setprecision(2) << fixed << presentValue << endl;// two values after the decimal
    cout << "Future value: $"<<setprecision(2) << fixed << futureValue<< endl;// two numbers after the decimal
    cout << "Annual interest rate: " << setprecision(1) << fixed << interestRate <<"%" << endl;// only allows 1 value after the decimal point
    cout << "Years: " << numberYears<< endl;// since the number of years only takes in a int no need for a set precision
}
int main ()
{
    
     double presentValue;// instantiates
    double interestRate;// instantiates
    double futureValue;// instantiates
    int numberYears;// instantiates
    
    futureValue=readFuture();// prototype and the value is set equal to each other so the returned value of the function is the value
    interestRate= readAnnualInterest();// prototype and the value is set equal to each other so the returned value of the function is the value
    numberYears = readYears();// prototype and the value is set equal to each other so the returned value of the function is the value
    presentValue= calculatePresentValue( futureValue,  interestRate , numberYears);// prototype and the value is set equal to each other so the returned value of the function is the value
    displayValues( presentValue,  interestRate,  futureValue,  numberYears);
    

        
    return 0;// end of loop
    
}
