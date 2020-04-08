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
#include<math.h>// computes math


using namespace std;

int readInput (char[], string);// prototype for reading in the input

int  readInput(char Arr[], string filename )// takes in the values and if it does not work returns false, reads in the arr of the student answers, and the correct answers
{
    ifstream inputFile;// inputs and checks if you can open the student and correct answers txt file
    inputFile.open(filename);
    
    if (!inputFile)// if the file doesn't open, return a false
        return -1;
    
    int i =0;
    while (inputFile>> Arr[i++])// puts the txt files into arrays
    {
    }
    inputFile.close();// closes the input files
    return i;// end of the function
    
}




int main(  ) {
    string file;
    char StudentAnswers[300];// 300 values are able to be in the array for student answers
    char CorrectAnswers[20];// only 20 values in the array for Correct Answers
    int studentindexmissed[20];// an array for the number of the qestion that got missed
    char studentmissedAns[20][2];// 2d array for the the student and the missed question
    int StudentNumber=1;// the number of the studnet, they are 11 in this txt file
    int  counterMissed=0;// coutnts everytime there is a question missed
    int numStudentAns=0;// the number of the question
    int j = 0, l = 0;// used in the for loop for missed question
    ofstream ExamAnalysis;// output file for missed qquestion
    int bestGradeStudent=0;//  calcu for best grade of the studnet number
    double  bestgradeval=0;// will compare
    int worstGradeStudent=0;// stores worst grade of the student number
    double worstGradeVal=100;// to compare
    double ThisStudentPercentage;// the percentage of the students grade
    
    
    ExamAnalysis.open("ExamAnalysis.txt");// open to output to the exam analysis txt


    numStudentAns =   readInput(StudentAnswers,"StudentAnswers.txt");// prototype for making the studentanswers array and txt file

    readInput(CorrectAnswers, "CorrectAnswers.txt");// prototype for function that makes the array of the correct answers using the correct answers


    for(int i = 0;  i< numStudentAns; i++ )// for loop to find the output for every student, 20 answers per student
    {
    if(i%20==0)// modulus to get every twenty students
    {
        cout << "Report for Student :"  << StudentNumber << endl << "______________\n"<<"Missed " << counterMissed << " out of 20 questions for " << ((((20.0- counterMissed)) / 20 )*100.00) << "\%"  << endl;// caluclate the missed using the percentage formula and outputs the missed question
        
        cout << "Questions missed:\n" ;// cout for the questions that was missed and the correct answer
  
        ExamAnalysis << "Report for Student :"  << StudentNumber << endl << "______________\n"<<"Missed " << counterMissed << " out of 20 questions for " << ((((20.0- counterMissed)) / 20 )*100.00) << "\%"  << endl;// same as previous but for the exam analysis txt file
        
        ExamAnalysis   << "Questions missed:\n" ;

        for(int k = 0; k < counterMissed; k++)// for statement for the array of the number of the question missed,
        {
        
            cout  << studentindexmissed[k] << "(" <<((studentmissedAns[k][0])) ;// couts the answer of the that the student put, and the correct answer, along with the number of the question
             cout  << "/" <<( (studentmissedAns[k][1])) << "), "  ;
            
            ExamAnalysis << studentindexmissed[k] << "(" <<((studentmissedAns[k][0])) ;// same as previous but for the output file
            ExamAnalysis  << "/" <<( (studentmissedAns[k][1])) << "), "  ;// same

        }
        cout << endl;// new line after report
        ExamAnalysis << endl;// new line after report
        
        
        if( ((((20.0- counterMissed)) / 20 )*100.00) > 70 )// if stamtenet for calculating if the student passed the quiz or not
        {
            cout << "This student passed the exam!\n" << endl;// if the score is greater than 70, than the student passed the exam
            ExamAnalysis  << "This student passed the exam!\n" << endl;// same as above to file
        }
        else// if not 70,
        {
            cout  << "This student failed the exam.\n" << endl;// if it is less than 70 than it is failing
            ExamAnalysis << "This student failed the exam.\n" << endl;
            
        }

        
        ThisStudentPercentage =((((20.0- counterMissed)) / 20 )*100.00) ;// calculating the percentage of the exam
        if(ThisStudentPercentage > bestgradeval)// if this student' grade is greater than the greatest value for the percentage, which starts off at 0
        {
            bestgradeval = ThisStudentPercentage;// will make the best grade equal to the highest score, after the if statement
            bestGradeStudent =StudentNumber;// will allocate the best grade of the student, as the highest grade for that student
            
        }
        
        if(ThisStudentPercentage < worstGradeVal)// if statement to calculate the worst grade
        {
            worstGradeVal = ThisStudentPercentage;// the worst grade will do the same as previous statement
            worstGradeStudent = StudentNumber ;// worst studnet number will do as previous statement
        }

        
        StudentNumber++;// the students number will increse in this if statement
        counterMissed =0;// instantiates  the countermissed to increase everytime a question is missed
        j = 0;// the j will be incremented to count how many missed
        l = 0;// the l will increase to see how many students missed a problem
    }

        if(StudentAnswers[i] != CorrectAnswers[l])// if statement to compare the values at the exact indexto see which problems were missed
        {
            counterMissed++;// if it is true, this counter will be increased
            studentindexmissed[j]= i%20;// the array for the index missed will be that problem modulus 20, since the insex goes all the way to a number greater than 20
            studentmissedAns[j][0]=StudentAnswers[i];// array for the students answers
            studentmissedAns[j][1]=CorrectAnswers[l];// takes in the correct answers
            j++;

        }
        l++;

    }
    
    



    cout << "Student " << bestGradeStudent  << " had the best grade with "<< bestgradeval <<  "%  \n";// cout statement for the best grade
    cout << "Student " << worstGradeStudent  << " had the worst grade with "<< worstGradeVal <<  "%  \n";// same but worst grade

    ExamAnalysis  << "Student " << bestGradeStudent  << " had the best grade with "<< bestgradeval <<  "%  \n";// same but for the output file
    ExamAnalysis  << "Student " << worstGradeStudent  << " had the worst grade with "<< worstGradeVal <<  "%  \n";// same but for the output file

    
    ExamAnalysis.close();// closes the exam analysis file
    return 0;// end of the int main function 
    
}



