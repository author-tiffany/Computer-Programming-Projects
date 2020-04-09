//
//  main.cpp
//  lesson6part2
//
//  Created by Tiffany Lourdraj on 10/21/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double lowerTemp=0; // lower temp initialized to prevent errors
    double higherTemp=0;// higher temp  to prevent errors
    double increment=1; //starts off at 11 but the user can change
    bool validinput=false;
    double celsiusValue =0;
    
  while ( validinput==false)
  {
    cin >>lowerTemp;
       cin >> higherTemp;
        cin >> increment;
      
      if (higherTemp<lowerTemp || increment<=0)
  {
      cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
      validinput=false;
    
  }
      else
      {
          validinput=true;
      }
  }
    cout << fixed << setprecision(5);
    cout << setw(18) << "Fahrenheit" << setw(18) << "Celsius" << endl; // sets the width for 18 spaces
     
      while (lowerTemp<=higherTemp) // for statement requirements to loop until desired value
    {
        celsiusValue = (lowerTemp-32)/1.8;// calcuated the value for the f to c
    cout << setw(18) << lowerTemp << setw(18) << celsiusValue << endl;// sets the width to 18 speaces for the f and celsius value
        lowerTemp+=increment;
    }
      

    return 0;
}
