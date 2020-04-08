
//
//  main.cpp
//  HW8 example2
// november 18th 2018
//  Created by Tiffany Lourdraj on 11/18/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//This program asks you ,the user for five different test scores, determine which one is the lowest, and calculate and display the average of the remaining four highest scores.

# include <fstream>// input
#include <iostream>// output
#include <iomanip>//
#include<math.h>// calculates math

using namespace std;

void getScore (int &testscore)// parameters of the testscore but is a pass by reference to update to score 1-5
{
    cout  << "Enter the test score \n";// prompts after call from the main func
    while (true)// this will be forever true so it will loop
    {
        cin >> testscore;// gets this testscore fivetimes
        if((testscore > 101 ) || (testscore < 0) )// checks if the number is within the range
            cout << "Please enter a number between 0 and 100";// output if the number is not with in the range
        else// breaks after 5 times
            break;
        
    }
}

int findLowest (int score1, int score2, int score3, int score4 , int score5)// parameters are the test scores
{
    int lowest = score1;// these statement will find the lowest value, and will keep at it until it returns the lowest number
    if(score2 < lowest)
        lowest = score2;
    if(score3 < lowest)
        lowest = score3;
    if(score4 < lowest)
        lowest = score4;
    if(score5 < lowest)
        lowest = score5;
    return lowest;

}

void calcAverage (int score1, int score2, int score3, int score4 , int score5)// parameters to calculate the average
{
    int total=0;// instantiates to not get an error
    double average;
    int lowest;
    
    lowest= findLowest(score1, score2, score3, score4, score5);// calls on the findLowest function to find the lowest number to compare it to the values
    if(score1 != lowest)// if the following values are not equal to the lowest value keep adding to the total
        total += score1;
    if(score2 != lowest)
        total += score2;
    if(score3 != lowest)
        total += score3;
    if(score4 != lowest)
        total += score4;
    if(score5 != lowest)
        total += score5;
    
    average = total / 4;// average will be the total divided by 4
    cout << "The Average of the four highest scores is " <<   average << endl;// couts the average
    
}


int main()// beggining of the program
{
    int score1, score2, score3, score4, score5;
    
    getScore(score1);// calls to the getScore function 5 times
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    calcAverage( score1,  score2,  score3,  score4,  score5);// will also call on the lowest function
    
    
    return 0;// end of program
}


