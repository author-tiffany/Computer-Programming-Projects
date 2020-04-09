//
//  main.cpp
//  Lesson8part2
//txl170004
//  Created by Tiffany Lourdraj on 11/10/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
// purpose: This lab lesson you are writing a program for the hypothetical Acme Wholesale Copper Wire Company. The Acme company sells spools of copper wiring for $100 each. Write a program that displays the status of an order.



# include <fstream>// input stream
#include <iostream>
#include <iomanip>//
#include<math.h>// calculate for math statements

using namespace std;


void displayCost(int spoolOrdered,int spoolStock , double Shipping)// function for displaying cost
{
    if(spoolOrdered <= spoolStock)
    {
        cout << "Spools ready to ship: " << spoolOrdered << endl;
        cout << "Spools on back-order: 0" << endl;
        cout << "Subtotal ready to ship: $" << setprecision(2) <<  right << setw(10)<< fixed<<(spoolOrdered * 100.00)  << endl;// xet to width of 10, 2 decimal places to right and for the following ones
        cout << "Shipping and handling:  $" << setprecision(2)<< right << setw(10)<< fixed<< (Shipping *spoolOrdered) << endl;
        cout << "Total shipping charges: $" << setprecision(2) <<  right << setw(10)<< fixed <<  ((spoolOrdered * 100.00) +(Shipping *spoolOrdered) ) << endl;
    }
    else {
        cout << "Spools ready to ship: " << spoolStock << endl;
        cout << "Spools on back-order: " << (spoolOrdered - spoolStock) << endl;
        cout << "Subtotal ready to ship: $" << setprecision(2) <<  right << setw(10)<< fixed<<  (spoolStock * 100.00)  << endl;
        cout << "Shipping and handling:  $" << setprecision(2) <<  right << setw(10)<< fixed << (Shipping *spoolStock) << endl;
        cout << "Total shipping charges: $" << setprecision(2) <<  right << setw(10)<< fixed<< ((spoolStock * 100.00) + (Shipping *spoolStock) ) << endl;

    }
    
    
    return;
    
}


void readCost(int& spoolsOrdered,int& spoolStock , double& Shipping)// function for reading in the cost
{
    double specialShipping= -1;// this is instantianted so it will go thru while loop
    char specialShippingAnswer;// char bc y or n
    spoolsOrdered=-1;// will go thru while loop

    while(spoolsOrdered<=0)
    {
        cout << "Spools to be ordered\n";
        cin >> spoolsOrdered;
        
        if( spoolsOrdered<=0)// if statement to run thru if the user inputs a value less than or equal 0
        {
            cout << "Spools order must be 1 or more\n";// required statement for spools
        }
    }
    
 // int  spoolStock=-1;
    while(spoolStock<0)
    {
        cout << "Spools in stock\n";
        cin >> spoolStock;
        
        if( spoolStock<0)// if statement to run thru if the user inputs a value less than or equal 0
        {
            cout << "Spools in stock must be 0 or more\n";
        }
    }
    cout << "Special shipping and handling (y or n)\n";
    cin >> specialShippingAnswer;
    if( specialShippingAnswer=='y')// if statement to run thru if the user inputs a value less than or equal 0
    {
    
        while(specialShipping<0)
        {
                
 
                cout << "Shipping and handling amount\n";
                cin >> specialShipping;
                    
            
                if (specialShipping >= 0)
                {
                    Shipping= specialShipping;
                    return;// returns the user value for shipping
                }
                else
                {
                    cout  << "The spool shipping and handling charge must be 0.0 or more\n";// needs to input greater than 0
                }
        }
    }
    else {
        Shipping=11.88;
    }
}

int main ()
{
   int  spoolsOrdered;// instantiates
   int  spoolStock=-1;// instantiates
   double Shipping;// instantiates
 //  double regularShipping= 11.88;// instantiates
    
    readCost( spoolsOrdered,spoolStock,Shipping);// calls readcost function first
    displayCost(  spoolsOrdered,spoolStock,Shipping);// then calls on display cost fucntion 

    return 0;// end of loop
    
}
