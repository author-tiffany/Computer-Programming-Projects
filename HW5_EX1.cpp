// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  September 23th 2018
// Assignment:  Lecture lesson #5 Exercise #1
// Compiler:    Apple Xcode

// Description: You will be calculating the number of seconds and converting it into days and hours

//
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() // beggining of the program
{
    double seconds; // the double is used to have a decimal for the seconds
    cout << "please enter number of seconds: " << endl; // prompts the user to input the number of seconds
    cin >> seconds; // enters the value into the variable seconds
    
    cout << fixed << setprecision(2) << endl;// you need fixed precision to set it to two decimal places because that is what time is set to
    
    if (seconds < 60) {
        cout << seconds << "seconds is" << seconds << "seconds." << endl; // if the seconds is less than 60 seconds or one minute then it will just output the number of seconds
        
    }
    
    else if (seconds >= 60 && seconds < 3600) {
        cout << seconds << "seconds is" << seconds/60 << "minutes." << endl; // if the seconds is more than 60 seconds or one minute  and less than 36000 seconds then it will convert into minutes
        
    }
    else if (seconds >= 3600 && seconds<86400) {
        cout << seconds << "seconds is: " << seconds/3600 << "hours." << endl; // if the seconds is less than 86400  seconds or 3600  seconds then it will just convert into the number of hours
        
    }
    else {
        cout << seconds << "seconds is " << seconds/86400 << "days." << endl; // by default it will be greater so it will be converted to days
    }
    return 0;// end of the program
}
