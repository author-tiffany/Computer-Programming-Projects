
//
//  main.cpp
//  Lesson7_ex1sample
//
//  Created by Tiffany Lourdraj on 11/4/18.
//  Copyright © 2018 Tiffany Lourdraj. All rights reserved.
//
# include <fstream>
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;
int main()
{
    ofstream saleschart;
    saleschart.open("saleschart.txt");
    ifstream salesb5;
    ifstream salesb6;
    ifstream salesb2;
    ifstream salesb3;
    ifstream salesb4;
    ifstream salesb;
    
    
    
    
    salesb5.open("salesb5.txt");
    salesb6.open("salesb6.txt");
    salesb4.open("salesb4.txt");
    salesb3.open("salesb3.txt");
    salesb2.open("salesb2.txt");
    salesb.open("salesb.txt");
    
    
    int num1; // store number
    long long int num2;// amount made
    if (salesb5)
    {
        saleschart << "SALES BAR CHART\n(Each X equals 1,000 dollars)"<< endl;
        while (salesb5 >> num1 >> num2)
        {
            if (num1<1||num1>99)
            {
                saleschart << "The store number" << num1 << "is not valid"  << endl;
            }
            if (num2<0)
            {
                saleschart << "The sales value for store"<< num1 <<"is negative" << endl;
                
            }
            num2= num2/1000;
            saleschart  << "\nStore " << num1 << ": ";
            
            
            for(int numasterisk=0; numasterisk<num2;++numasterisk)
            {
                saleschart << "X";
            }
    
            
        }
        salesb5.close();
        
    }
    else
    {
        saleschart << "The file could not be opened" << endl;
    }
    saleschart.close();
    return 0;
}


