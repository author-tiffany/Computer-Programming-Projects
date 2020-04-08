// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 23th 2018
// Assignment:  Lecture Homework #3 Exercise #1
// Compiler:    Apple Xcode

// Description: This problem asks you to calculate the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string  firstMonth; // holds the name of the 1st month
    string secondMonth; // holds the name of the 2nd month
    string thirdMonth; // holds the name of the 3rd month
    double first, second, third; // holds the value for the rainfall of 1st 2nd and 3rd month
    double averageRainfall; // stores the value for the average rainfall of the three months
    cout << "Please enter the first month:" << endl ;
    cin >> firstMonth;
    cout << "Please enter the rainfall for the first month:" << endl ;
    cin >> first;
    cout << fixed << setprecision(2);
    
    cout << "Please enter the second month:" << endl ;
    cin >> secondMonth;
    cout << "Please enter the rainfall for the second month:" << endl ;
    cin >> second;
    cout << fixed << setprecision(2);
    
    cout << "Please enter the third month:" << endl ;
    cin >> thirdMonth;
    cout << "Please enter the rainfall for the third month:" << endl ;
    cin >> third;
    cout << fixed << setprecision(2);
    
    averageRainfall = (first+second+third)/ 3.00;
    
    
    cout << "the average rainfall for " << firstMonth << "," << secondMonth << "," <<  thirdMonth <<" was " << averageRainfall << " inches." << endl; // outputs the value after calculating and setprecision to round to two decimal values
  
    
    return 0;
    
} //end int main()
