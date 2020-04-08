// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 23th 2018
// Assignment:  Lecture Homework #2 Exercise #2
// Compiler:    Apple Xcode

// Description: the  program ask the user for value of either celsius, fahrenheit or kelvin which then converts it to the other ways to measure temperature

//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double Celsius; // holds the value for celsius
    double Fahrenheit; // holds the value for Fahrenheit
    double Kelvin; // holds the value of Kelvin
    double c, k, f; // holds the information to use the equations
   
    cout << "Please enter a number in degrees Celsius:" << endl ;
    cin >> Celsius;
    f = (9/5.0)* Celsius + 32;
    k = Celsius + 273.15;
    cout << fixed << setprecision(2);
    cout << "the equivalent fahrenheit is : " << f << " degrees" << endl; // outputs the value after calculating and setprecision to round to two decimal values
    cout << "the equivalent kelvin is: " << k << " K" << endl; // outputs the value after calculating and setprecision to round to two decimal values

    cout << "Please enter a number in degrees Fahrenheit:" << endl ;
    cin >> Fahrenheit;
    c = (5/9.0)*(Fahrenheit - 32);
    k = (5/9.0)*(Fahrenheit- 32) + 273;
    cout << fixed << setprecision(2);
    cout << "the equivalent celsius is : " << c << " degrees" << endl; // outputs the value after calculating and setprecision to round to two decimal values
    cout << "the equivalent kelvin is: " << k << " K" << endl; // outputs the value after calculating and setprecision to round to two decimal values
    
    
    
    cout << "Please enter a number in degrees Kelvin:" << endl ;
    cin >> Kelvin;
    f = (9/5.0) *(Kelvin - 273) + 32;
    c = Kelvin - 273;
    cout << fixed << setprecision(2);
    cout << "the equivalent celsius is : " << c << " degrees" << endl; // outputs the value after calculating and setprecision to round to two decimal values
    cout << "the equivalent fahrenheit is: " << f << " degrees" << endl; // outputs the value after calculating and setprecision to round to two decimal values

    
    return 0;
    
} //end int main()


