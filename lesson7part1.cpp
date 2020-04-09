
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
    ifstream salesb;
    std::string filename ;
    
    
    
    
    
    std::getline(std::cin, filename);
    salesb.open(filename);
    
    int num1; // store number
    long long int num2;// amount made
    if (salesb)
    {
        saleschart << "SALES BAR CHART\n(Each X equals 1,000 dollars)"<< endl;
        while (salesb >> num1 >> num2)
        {
            if (num1<1||num1>99)
            {
                saleschart << "The store number" << num1 << "is not valid"  << endl;
            }
            if (num2<0)
            {
                saleschart << "The sales value for store"<< num2 <<"is negative" << endl;
                
            }
            num2= num2/1000;
            saleschart  << "\nStore " <<  setw(2)<< num1 << ": ";
            
            for(int numasterisk=0; numasterisk<num2;++numasterisk)
            {
                saleschart << "X";
            }
            
        }
        salesb.close();
        
    }
    else
    {
        saleschart << "The file could not be opened" << endl;
    }
    saleschart.close();
    return 0;
}


