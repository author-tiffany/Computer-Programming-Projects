// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  October 17th 2018
// Assignment:  Lecture lesson #5 Exercise #2
// Compiler:    Apple Xcode

// Description: You will be calculating the number of seconds it will take for sound to travel though a medium.


//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int choice;
    double distance;
    cout << "Select the medium that sound is traveling through:"<< endl ;
    cout << "1 Air" << endl;
    cout << "2 Water" << endl;
    cout << "3 Steel" << endl;
    
    cin >> choice;
    switch (choice)

    {
       case 1: cout << "Enter distance (in feet)\n";
           break;
        case 2: cout << "Enter distance (in feet)\n";
            break;
  case 3: cout << "Enter distance (in feet)\n";
            break;
       default: cout << "The menu value is invalid. Please run the program again.\n";
    }
    cin >> distance;
    
    if (distance <=0 )
    {
        cout <<"The distance must be greater than zero" << endl;
     }
    else if ( choice==1)
    {
        cout<< "Air: " << fixed << setprecision(3)<< distance << " ft" << endl;

        cout<< "Traveled for " << fixed << setprecision(3)<< (distance/1100) << " seconds" << endl;
    }
    else if ( choice==2)
        
    {
        cout<< "Water: " << fixed << setprecision(3)<< distance << " ft" << endl;

        cout << "Traveled for " << fixed << setprecision(3)<< (distance/4900) << " seconds" << endl;
    }
    else if ( choice==3)
    {
        cout<< "Steel: " << fixed << setprecision(3)<< distance << " ft" << endl;

        cout << "Traveled for " << fixed << setprecision(3)<< (distance/16400) << " seconds" << endl;

    }
    return 0;
}
