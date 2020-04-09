//
//  main.cpp
//  Lesson8part1
//
//  Created by Tiffany Lourdraj on 11/10/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
// purpose :Your program will calculate the distance an object travels (in meters) on Earth for a specified number of seconds.



# include <fstream>// input stream
#include <iostream>//
#include <iomanip>
#include<math.h>// calculates for math functions

using namespace std;



double readSeconds()// function for reading in the correct seconds values
{
  double seconds=-1;// starts of with the value of -1 so goes through the while loop
  while(seconds<0)// if the seconds is less than 0 will go through the while loop
  {
    cout << "Enter the time (in seconds)\n";// prompt
    cin >> seconds;// cin statement of the number of seconds
     
    if( seconds<0)// if the seconds are less than 0, will output this statement
    {
        cout << "The time must be zero or more\n";// then this statement is outputed
    }
  }
return seconds;// end of the seconds function when the seconds are greater than 0, if not will keep repeating the if loop
    
    
}

double calculateDistance(double seconds)// takes in the seconds as the parameters, so that it may calculate the distance
{
    double distance;// distance is a double because it can contain decimals
    distance= 0.5 * 9.8* seconds * seconds;// 9.8 is the acc due to gravity, then the rest is the correct formula for distance
    return distance;// end of the function for calculating distance
    
}

void displayResults(double seconds, double distance)// the displayResults functions will take in the seconds and distance so that the distance output can be returned
{
    cout << "The object traveled " << setprecision(3) << fixed << distance<< " meters in " << setprecision(2) << fixed << seconds<< " seconds\n";// the statement that has a setprecision of 3 to the distance and a setprecision of 2 for the seconds.
}
int main ()
{
    double seconds = 1;// instantiates the seconds as 1 to not run into an error, but wll run through the seconds
    double distance;// instantiating the distance variable
    
    do
    {
        seconds=readSeconds();// goes to the seconds function, and then runs through it.
        if ( seconds==0)// if the seconds is equal to 0 it will terminate here and run back to the seconds function
        {
            return 0;
        }
        distance= calculateDistance(seconds);// distance variable is equal wha tthe function of calculating distance is
        displayResults( seconds,distance);// displaying the results prototype
       
    }
    while(seconds) ; // do while loop for the seconds variable
    
    return 0;// end of program 
    
}
