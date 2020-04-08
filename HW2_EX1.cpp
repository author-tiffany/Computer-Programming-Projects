// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 18th 2018
// Assignment:  Lecture Homework #2 Exercise #1
// Compiler:    Apple Xcode

// Description: the  program ask the user how far he has to go under each condition. The program will then print out the total number of gallons required for the trip.

//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double gallonsTown = 23.5;
    double gallonsHighways = 28.9;
    double milesTown, milesHighway, gallonsTotal; // the
    cout << "Please enter the number of in-town driving miles:" << endl ;
    cin>> milesTown;
    cout << "Please enter the number of highway driving miles:" << endl ;
    cin >> milesHighway;
    gallonsTotal = (milesTown/gallonsTown)+(milesHighway/gallonsHighways); // the gallons can be calculated by dividing the miles in the town by the gallon price in the town and then adding it to the miles on the highway which is divided by the gallon price on the highway
    cout << fixed << setprecision(1);
    cout << "The total number of gallons required is:" << gallonsTotal << " gallons"  << endl;

    
    return 0;
    
} //end int main()


