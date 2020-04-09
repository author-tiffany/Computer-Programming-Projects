// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  October 17th 2018
// Assignment:  Lecture lesson #6 Exercise #1
// Compiler:    Apple Xcode

// Description: In this program you will be outputting the characters that map to the ASCII codes 32 through 126. You will need a loop to iterate through the input values and output the corresponding character. This mapping is shown in appendix A in your Gaddis text book.


//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned int valueLower=0;
    unsigned int valueUpper=0;
    int i=0;
    bool validinput=false;
    
    while(validinput == false) {
        cout << "Enter lower and upper values" << endl;
        cin >> valueLower;
        cin>> valueUpper;
        if (( valueUpper > 126) &&  (valueLower < 32))
        {
            cout << "Values must be in range 32 to 126 inclusive" << endl;
        }
        else
            validinput = true;
    }
    
    cout << "Characters for ASCII values between " << valueLower << " and " << valueUpper << endl;
    cout << "----+----+----+-" << endl;
    
    
    while (valueLower<=valueUpper)
    {
        char ASCII = static_cast<char>(valueLower);// converts the into to ascii characters
        cout <<   left<< setw(1);
        cout<< ASCII ; // will con
        i++;
       
        if ((i % 16) == 0)
        {
            cout << endl;
        
        valueLower = valueLower+1;
        
    }
    cout << endl << "----+----+----+-" << endl;
    
    return 0;
}
}

