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
#include<math.h>// caluclated math


using namespace std;

bool readInput (char[], string);// prototype of the read input, takes in a array and a string
char DisplayOutput(char[], char[]);// display takes in answer and student array

bool  readInput(char Arr[],  string filename)// takes in the values and if it does not work returns false, all pass by values
{
    ifstream inputFile;// output instantiate
    inputFile.open(filename);// opens the file

    if ( inputFile.fail())
    {
        return false;// if fails return false
    }
    
    int i =0;
    while (i<20 && inputFile>> Arr[i++])// loops through the indexes of the array and puts to the input file
    {
    }
 
    return true;
    
}
 char DisplayOutput(char  Answers[], char  Student[])// the display output is the array of the student and answer
{
   
   int  counterMissed=0;
    for(int i = 0;  i<20; i++ )// until it hits the max number of questions which is index 19
    {
       if(Student[i] != Answers[i])// if the answer is not the same at the index, then the cout states the correct answer
       {
            ++counterMissed;
           cout << "Question " << i+1 << " has incorrect answer '" << Student[i] << "'," <<" the correct answer is " << "'" << Answers[i] << "'" << endl;
            
        }
      
   
    }
     cout << counterMissed << " questions were missed" << endl ;//
    if( counterMissed > 6)// if they miss more than 6 then that is less than 70 percent which means failure
        cout << "The student failed\n";
    else
        
        cout << "The student passed\n" ;// otherwise the grade is more than a 70
        return 0;
    
}


int main(  ) {
    string fileStudent;// string name of the student file
    string fileAnswer;// string name of the answer file
    char Student[20];// array of the student answers
    char Answers[20];// array of the student answers
    bool InputFileTest =0;// test for opening file
    bool InputFileTest2 = 0;// same as above

    cin >> fileStudent;//
   InputFileTest = readInput(Student, fileStudent);// prototype is equal to the input file test, to test if it will open
    
 
    
    if (InputFileTest==false)// output if the file is invalid
    {
        cout << "File " << "\"" << fileStudent << "\" " <<  "could not be opened\n";
        return 0;
    }
    cin >> fileAnswer;
    InputFileTest2 =  readInput(Answers, fileAnswer);// read in if the answers file is invalid
    
    if (InputFileTest2==false)// if the answers file doesnt work
    {
        cout << "File " << "\"" << fileAnswer << "\" " <<  "could not be opened\n";
        return 0;
    }
    DisplayOutput(Answers, Student);// calls to the display output finction, using both arrays
    
  
 
    return 0;// end of int main

}

    
    
