// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 8th 2018
// Assignment:  Lecture Homework #1 Exercise #1
// Compiler:    Apple Xcode

// Description: the purpose of this program is to calculate the distance traveled under acceleration “a” and time “t”.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float timeVal = 5.36; // the value of the time
    float acceleration = 32.0; // the value of the acceleration
    double distanceVal; // this is the value we are trying to find and print from the distance formula
    distanceVal = (1.0 / 2 ) * (acceleration * timeVal * timeVal );
    cout << fixed << setprecision(1);
    cout << "The time was: " << timeVal << " sec" << endl;
    cout << "The acceleration was: " << acceleration << " feet/sec/sec" << endl;
    cout << "The distance traveled was: " << distanceVal << " feet" << endl;

    
} //end int main()
