// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 23th 2018
// Assignment:  Lecture lesson #5 Exercise #2
// Compiler:    Apple Xcode

// Description: You will be calculating the number of seconds it will take for sound to travel though a medium.


//
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main()
{
    char choicePackage;
    double minutes;
    double valueA = 0;// this is the value if the minutes is under
    double valueA2 = 0 ;
    double valueA3 = 0 ;
    double valueB = 0;
    double valueB2 = 0; // package A minutes cost
    double valueB3 = 0;// package c minutes cost
    double valueC = 0;
    double valueC2 = 0; // package A minutes cost
    double valueC3 = 0; // package B minutes cost
    
    cout << "Select the monthly Package plan:"<< endl ;
    cout << "1.A" << endl;
    cout << "2.B" << endl;
    cout << "3.C" << endl;
    
    cin >> choicePackage;
    {
    if(choicePackage=='a' || choicePackage=='A') // this is the if else statement for calculating the total cost if the package is choice A
    {
        choicePackage=1;
        cout << "Enter minutes (in whole minutes)" << endl;
        cin >> minutes;
       
        {
            if( minutes>450)
            {
                valueA = (minutes*.45)+39.99;
                {
                    if (minutes >900)
                    {
                        valueA2 = (minutes*.40)+59.99;
                    }
                    else
                    {
                        valueA2 = 59.99;
                    }
                }
                valueA3 = 69.99;
            }
            else
            {
                valueA = 39.99;
                valueA2= 59.99;
                valueA3=69.99;
            }
        
        }
        
    }
        else if(choicePackage=='b' || choicePackage=='B') // this is the if else statement for calculating the total cost if the package is choice B
        {
            choicePackage=2;
            cout << "Enter minutes (in whole minutes)" << endl;
            cin >> minutes;
          
            {
                if (minutes>900)
                {
                    valueB = (minutes*.40)+59.99;
                    valueB2= (minutes*.45)+39.99;
                    valueB3= 69.99;
                }
                else
                {
                    valueB = 59.99;
                    valueB2=39.99;
                    valueB3=69.99;
                }
            }
            
        }
          else  if(choicePackage=='c' || choicePackage=='C') // this is the if else statement for calculating the total cost if the package is choice C
            {
                choicePackage=3;
                cout << "Enter minutes (in whole minutes)" << endl;
                cin >> minutes;
               
                {
                    if(minutes>0)
                    {
                        valueC= 69.99;
                        {
                            if(minutes>900)
                            {
                                valueC3=(minutes*.40)+59.99;

                            }
                            else
                                valueC3= 59.99;
                        }
                        if(minutes>450)
                        {
                            valueC2= (minutes*.45)+39.99;
                        }
                        else
                            valueC2= 39.99;
                    }
                    
                }
                
            }
        else
    
        {
        cout << "Enter a valid package" << endl;
   
        }
        
       if(choicePackage==1)
        {
            
            if (valueA>valueA2 && valueA>valueA3)
            {
                cout << "total package cost: $" << valueA<< "Congrats, you chose the best value for you minutes!" << endl;
            }
         if ( valueA2 > valueA)
       {
           cout << "your monthly bill is: " << valueA << "However, package B is cheaper at: $" << valueA2<< endl;
       }
            {
         if (valueA3 > valueA)
        {
           cout << "your monthly bill is: " << valueA << "However, package C is cheaper at: $" << valueA3<< endl;
        }
            }
        }
        if(choicePackage==2)
        {
            
            if (valueB>valueB2 && valueB>valueB3)
            {
                cout << "total package cost: $" << valueB << "Congrats, you chose the best value for you minutes!" << endl;
            }
            if ( valueB2 > valueB)
            {
                cout << "your monthly bill is: " << valueB << "However, package A is cheaper at: $" << valueB2<< endl;
            }
            {
                if (valueA3 > valueA)
                {
                    cout << "your monthly bill is: " << valueB << "However, package C is cheaper at: $" << valueB3<< endl;
                }
            }
        }
        if(choicePackage==3)
        {
            
            if (valueC>valueC2 && valueC>valueC3)
            {
                cout << "total package cost: $" << valueC<< "Congrats, you chose the best value for you minutes!" << endl;
            }
            if ( valueC2 > valueC)
            {
                cout << "your monthly bill is: " << valueC << "However, package B is cheaper at: $" << valueC2 << endl;
            }
            {
                if (valueC3 > valueC)
                {
                    cout << "your monthly bill is: " << valueC << "However, package C is cheaper at: $" << valueC3 << endl;
                }
            }
        }
     
}
    
        return 0;
           }

