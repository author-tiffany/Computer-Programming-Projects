//
//  main.cpp
//  Lesson9Part2
//
//  Created by Tiffany Lourdraj on 11/24/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//loop if the value is found. Otherwise the algorithm would return the last instance of the value instead of the first instance.) If the value is not found, we return an error indicator, oftentimes a - 1, that indicates the value was not in the data set. For this problem, please implement a linear search algorithm that performs this function.
#include <fstream>// both input and output stream
#include <iostream>//
#include <iomanip>//
#include<math.h>// calculate math


using namespace std;

bool readInput (char[], string);// prototype of the

int  readInput(int Arr[], string filename )// takes in the values and if it does not work returns false, all pass by values
{
     ifstream inputFile;// output instantiate
     inputFile.open(filename);// opens the file
    
   

    if ( !inputFile)// if not opening return false
        return -1;
    
    int i =0;
    while ( inputFile>> Arr[i++])// takes in the file into an array
    {
    }
    return i;
}


int searchList(int stdList [], int numElems, int value)// search list function to take in a array, number of elements, and the value of the LSTest
{
    int i;
    for( i = 0;  i<numElems; i++ )// for statement to loop through the array list and see if a value matches
    {
        if(stdList[i] == value)// if the value matches, go through again
        {
            return i;
            
        }
    }
    if( i == numElems)// if the value is = the num of elements in the array, end program
    {
        return -1;
    }
    return 0;
    
}

int main(  ) {
    string file;// string file to
    int LSStandard[200];// array of the integers we search
    int LSTest[200];// testing if the values are same
      int  numStd, numTest , j , result;// the result int which we are searching for, the numstd is in the LSS arrayl and j is incremented in the for loop
     numStd = readInput(LSStandard  , "LSStandard.txt");// prototype for the readinput of the array searching against
    
     numTest = readInput(LSTest,   "LSTest.txt");// protoype for the array we are testing
 
    for( j = 0;  j<numTest; j++ )// for statement to increment through the array
    {
    
        result = searchList(LSStandard, numStd, LSTest[j]  );// prototype of the searchlist to find the numStd
         if(result != -1 )// if not false
        {
                cout << "Number " << j <<  "(" <<  LSTest[j] <<  ") was located at index " << result << "." << endl;// output the statement

     
        }

        if( result == -1)// if false
        {
            cout << "Number " << j <<  "(" <<  LSTest[j] << ") was not in the file." << endl;// output the number that was not found
        }
    }
    return 0;// end of program
    
}



