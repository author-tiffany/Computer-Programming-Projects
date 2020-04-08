// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  Novemeber 2th 2018
// Assignment:  Lecture lesson #7 Exercise #1
// Compiler:    Apple Xcode

// Description:once the user enters a number in the correct range, your program will print out four patterns of asterisks that look like the following. Note that the number provided by the user is equal to the height of the pattern.
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() // beggining of the program
{
    {
        int data=0;// instantiates user data as 0 so there is no error
        bool inputnotValid=true;// true allows to ran thru while loop checking if it is in the range
        
        while(inputnotValid==true)
        {
            cout << "Enter integer between 1 and 15" << endl;
            cin >> data;
        if (data<=15 && data>=1)// false statement that goes back in to the while loop until a correct input
            inputnotValid=false;
            
        }
        for(int i= data;i>0 ;i--)// first loop for the first triangle that adds one asterisk each iteration of the data value
        {
        for(int count =i; count>0; count--)
        {
            cout << "*";
    
        }
            cout << endl;
            
            
            
        }
        
        for(int i= data;i>0 ;i--)// for loop for the second triangle that outputs a whitespace each time, but decreases, and increases the asterisk
        {
            for (int j= data-i;  j>0; j--)
            {
                cout << " ";
            }

            for(int count =i; count>0; count--)
            {

                cout << "*";
                
            }
            cout << endl;
           
        }
        
        { int totalAsterisks=1;// instantiates totalAsterisk as 1 so it can be used in the follwing loop
            for(int i= 1;i<=data ;i++) // for loop that goes thru the i value which is the line #, and adds a amount of whitespace and asterisks depending on that
            {
                totalAsterisks= 2*i-1;// this calculates per line the # of asterisks
                

                for (int j= data-i;  j>0; j--)// whitespace for pyramid
                {
                    cout << " ";
                }
                
                for(; totalAsterisks>0; totalAsterisks--)// asterisk for pyramid
                {
                    
                    cout << "*";
                }
                
                
                cout << endl;// end of the filled triangle
            }
           
            for(int i= 1;i<=data ;i++)// empty triangle
           {
              //totalAsterisks= 2*i-1;// amount of
                
               if(i==1)
               {
                  for (int j= 1;  j<data; j++)
                  {
                      cout << " ";
                  }
                   cout << "*"<< endl;
                
               }
               if(i>1 && i<data)
               {
                   for(int k= i; k<=data-i; k+=1)// outputs the whitespace before the asterisk
                   {
                       cout << " ";
        
                   }
                   cout << "*";// outputs the asterisk for the first one
                   
                  for (int k= 0; k<=2*i-3; k+=2)// output for the whitespace between the asterisks
                  {
                      cout << " ";
                  }
                   cout << "*" << endl;// outputs the second asterisk in the line
                   
                   // increases 1,3,5
               }
               if (i==data)
               {
                   for(int totalAsterisks=1; totalAsterisks<=i+4; totalAsterisks++)// asterisk for pyramid base
                   {
                       cout << "*";
                   }
                   cout << endl;// endl of the pyramid
                   
               }
            
                    }
                    }
              
           }
    return 0; // end of program

    }


