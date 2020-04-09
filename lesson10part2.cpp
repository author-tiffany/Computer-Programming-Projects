//
//  main.cpp
//  Lesson9Part2
//
//  Created by Tiffany Lourdraj on 11/24/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//In part 1 you will be creating a quiz grading program. You will compare the student's answers with the correct answers, and determine if the student passed the quiz or not.
#include <fstream>// both input and output stream
#include <iostream>//
#include <iomanip>//
#include<math.h>//

const int MAX_COLUMNS= 5;// global constant for the max columns


using namespace std;
int readFile(double values[][MAX_COLUMNS], int maxRows, string inputFileName);// prototype to read files in

// for the array
double average(double values[][MAX_COLUMNS], int numberRows);// prototype for calculating average

// for a specified column (column)
double Average(double values[][MAX_COLUMNS],int actualRows, int numberRows)// verage function, which takes in the actual rows, and the array of the input file
{
    double avg =0;
    for (int column =0; column<5; column++)// for statement to increment through the columns
    {
        for ( int row = 0; row<actualRows;row++ )// for statement to increment through until it hits the actual rows
        {
            avg += values[row][column];

        }
    }
    avg /= (actualRows * 5);//average calculation
    cout << avg << endl;// will cout the average of the rows
    return avg;// end of the average function
}

double columnAverage(double values[][MAX_COLUMNS], int& column, int numberRows)// the column average
{
    double avg=0;
    for (int row=0; row <20; row++) {// for statement to loop through each row
        avg += values [row][column];// increase the values and add it to the avg
        
        
    }
    avg /= numberRows;// average will equal dividign the total by the number of rows
    cout << avg <<  endl;
    return avg;// end of the column average program
     //averages = values [][MAX_COLUMNS++];
 }


int main()
{
    const int MAX_ROWS = 20;// the max of rows is a constant
    string inputFileName;// takes in the file's name
    double grades[MAX_ROWS][MAX_COLUMNS];// array for the grades
    cin  >> inputFileName;// takes in the name of the file
    int actualRows = readFile(grades, MAX_ROWS, inputFileName);// prototype for the readFile function
    if (actualRows == -1)// if the actualRows cannot be accessed then the file will not be opened
    {
        cout << "File " << "\"" <<  inputFileName << "\""<< " could not be opened";
        return 0;
    }
    else if (actualRows == 0)// if there is not data, will return a 0 and output this statement
    {
        cout << "The input file " << "\"" << inputFileName << "\"" << " did not contain any data";
        return 0;
    }
    for( int column=0 ; column < 5 ; column ++ )// for loop for going thru the column average
    {
        columnAverage( grades,  column,  actualRows);
      
    }
    
        Average(grades,  actualRows,  20);
    }
    



int readFile (double grades[][MAX_COLUMNS], int maxRows,string inputFileName ) {// function of the readfile, to read the file  and takes the array of grades, int maxRows, and the name of the input file name

    int row = 0;
    int col= 0;
    ifstream inputFile;// output instantiate
    inputFile.open(inputFileName);// opens the file
    
    if ( inputFile.fail())
        return -1;// if doesn't open, false
    
    while (row<maxRows && inputFile>>grades[row][col])// will increase thru the column until the max rows is hit 
    {
        col++;
        if (col==MAX_COLUMNS)// the columns will keep incrementing until it hits the max columns, which then proceeds to increment the number of rows
        {
            row++;
            col =0;
        }
    }
    return row;// end of the readfile to return the value of rows
}

