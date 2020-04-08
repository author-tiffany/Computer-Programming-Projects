// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  October 20th 2018
// Assignment:  Lecture lesson #6 Exercise #2
// Compiler:    Apple Xcode

// Description: The program should then display a bar graph comparing each store’s sale
//
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() // beggining of the program
{
    {
        int sales1;// the variable for the first sale
        int sales2;// the variable for the 2nd sale
        int sales3;// the variable for the 3rd sale
        int sales4;// the variable for the 4th sale
        int sales5;// the variable for the 5th sale
        
        cout << " Enter today's sales for store 1:" ;  // statement prompting user to enter amount
        cin >> sales1;// cin statement that takes n the value for the first value
        cout << " Enter today's sales for store 2:" ;
        cin >> sales2;

        cout << " Enter today's sales for store 3:";
        cin >> sales3;

        cout << " Enter today's sales for store 4:" ;
        cin >> sales4;

        cout << " Enter today's sales for store 5:" ;
        cin >> sales5;
        
        cout << "\nSALES BAR CHART" << endl;
        cout << "(Each * = $100)" << endl;
        cout << "Store 1: " ;
        int asterisk;// introdice the int asterisk only once which is initialzed in the following for statement
       
        {
                for (asterisk=100;asterisk<=sales1; sales1-=100) // for statment that intit. asterisk as 100, test by subtracting 100 each time and doing it as long as is greater than 100, each time it prints an * so
            {
                cout << "*"; // cout the asterisk until the for statment is false

            }
        }
        
        {
            cout << "\nStore 2: ";
            for (asterisk=100;asterisk<=sales2; sales2-=100)
            {
                cout << "*"; // cout the asterisk until the for statment is false

            }
        }
        {
            cout << "\nStore 3: " ;
            for (asterisk=100;asterisk<=sales3; sales3-=100)
            {
                cout << "*"; // cout the asterisk until the for statment is false

            }
        }
        {
                cout << "\nStore 4: " ;
            for (asterisk=100;asterisk<=sales4; sales4-=100)
            {
                cout << "*"; // cout the asterisk until the for statment is false
            }
        }
        {
            
            cout << "\nStore 5: " ; // cout statment for the store number :
            for (asterisk=100;asterisk<=sales5; sales5-=100)
            {
                cout << "*";  // cout the asterisk until the for statment is false

            }
        }
    }
    return 0; // end of program
}

   
   
