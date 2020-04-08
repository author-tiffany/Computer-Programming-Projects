
//
//  main.cpp
//  HW8 example 1
// november 18th 2018
//  Created by Tiffany Lourdraj on 11/4/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//This program asks you to determine a set of prime numbers, given some input from the user.

# include <fstream>// input
#include <iostream>// output
#include <iomanip>//
#include<math.h>//

using namespace std;


bool isPrime (int number)// bool because it will output only true or false
{
    int i;
    for(i=2; i < number; i++ )// for statement each number if it is a prime
    {
        if((number % i ) == 0)// modulus statement that checks for the prime number because it can only divided by itself
            return false;// will
        
    }
    return true;
}

int main()// beggining of the program
{
    ofstream Outputfile;// outputs file
    Outputfile.open("PrimeOut.txt");//opens the Prime Out
    
    int currNum = 2; //  current number
    int count =0;// count is to
    int NumtoPrint=0;// intizializes to 0 which is the variable that the user inputs to print output that amount of prime numbers
    int Printed=0;// this is used to increase until there are 10 numbers per line
    
    cout  << "Enter the number of primes to print. \n";//
    while (true)// will always return true so will loop through this if statement to check if is in the range
    {
        cin >> NumtoPrint;// takes in the user input for amount of primes to print
        if((NumtoPrint > 100 ) || (NumtoPrint < 1) )// if the range is incorrect reenter the number in the range
            cout << "Please enter a number between 1 and 100";
        else
            break;
        
    }
    
    while (count < NumtoPrint)// while the count is less than numtoPrint, then go to the isPrime function
    {
        if(isPrime(currNum))
        {
            count ++;// will increases each time until it reaches the NumtoPrint= user input
            Printed++;
            cout << "\t" <<  setw(5) << right << currNum ;
            Outputfile << "\t" << setw(5) << right << currNum ;
            
            if((Printed % 10) == 0)// printed modulus 10 to check if 10 items are printed per line
            {
                cout << endl;
                Outputfile << endl;// outputs the
                Printed =0;
            }
        }
        
        currNum ++;// increments the currNum to go to the function and try if the number is prime or not
    }
    
    
    Outputfile.close();// closes the ouput file
    return 0;// end of program
}


