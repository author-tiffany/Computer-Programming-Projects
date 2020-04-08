// Author: Tiffany Lourdraj
// Course: CS1336
// Date:  October 20th 2018
// Assignment:  Lecture lesson #6 Exercise #1
// Compiler:    Apple Xcode

// Description: You will be calculating the values between two numbers and the toal number of #s in between
//
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main() // beggining of the program
{
{

    int count;// the beginning number
    int num_counter=0; // counter to find out # of int per loop, which gets added 1 each iteration
    int i=0; // number of char per line
    {
        for(count =2; count <=100; count +=2)
        {
            
          
    cout <<   right << setw(1) << " ";// sets the int to the right side and a length of 1
    cout << count ;
    num_counter++; // adds one each iteration
    i++;// adds one each iteration
            
            if ((i%10) ==0)// modulus statement to only print a certain number of int per line
            {
                cout << endl;
            }
    }
    cout <<" Number of numbers = " << num_counter << endl;// couts the num of int in the loop
        cout << endl;
    }
  
    int count2=99;// the beginning number
    int num_counter2=0;// counter to find out # of int per loop, which gets added 1 each iteration
    int i2=0; // number of char per line for b
    {
        while( count2 >=3)
        {
            
            cout <<   right << setw(1) << " ";// sets the int to the right side and a length of 1
            cout << count2 ;
            count2-=3;// subtracts 3 each time
            num_counter2++;
            i2++;
            
            if ((i2%10) ==0)// modulus statement to only print a certain number of int per line
            {
                cout << endl;// a new line every time there is 10 characters
            }
        }
        cout <<" \nNumber of numbers = " << num_counter2 << endl;// couts the num of int in the loop
        cout << endl;
    }
    
    int count3=2;// the beginning number
    int num_counter3=0;// counter to find out # of int per loop, which gets added 1 each iteration
    int i3=0; // number of char per line for b
    {
        while( count3 <=1048576)
        {
            
            cout <<   right << setw(1) << " ";// sets the int to the right side and a length of 1
            cout << count3 ;
            count3*=2;// multiplies by 2 each time
            num_counter3++;
            i3++;
            
            if ((i3%8) ==0)// modulus statement to only print a certain number of int per line
            {
                cout << endl;
            }
        }
        cout <<" \nNumber of numbers = " << num_counter3 << endl;// couts the num of int in the loop
        cout << endl;
    }
    int count4=1048576;// the beginning number
    int num_counter4=0;// counter to find out # of int per loop, which gets added 1 each iteration
    int i4=0;
    
    do
    {
         cout <<   right << setw(1) << " ";// sets the int to the right side and a length of 1
        cout << count4;
        count4/=2;//divides by two each time
        num_counter4++;
        i4++;
        
        if ((i4%8) ==0)// modulus statement to only print a certain number of int per line
        {
            cout << endl;
        }
    }while (count4>=2);
    cout <<" \nNumber of numbers = " << num_counter4<< endl;// couts the num of int in the loop

    }
    int count5;// the beginning number
    int num_counter5=0;// counter to find out # of int per loop, which gets added 1 each iteration
    int i5=0; // number of char per line
    {
        for(count5 =10; count5 <=1000000; count5 *=10)// calculate the values between 10 and 10,000, and the totall # of numbers
        {
            
            
            cout <<   right << setw(1) << " "; // sets the int to the right side and a length of 1
            cout << count5 ;
            num_counter5++;
            i5++;
            
            if ((i5%10) ==0) // modulus statement to only print a certain number of int per line
            {
                cout << endl;
            }
        }
        cout <<"\n Number of numbers = " << num_counter5 << endl;// couts the num of int in the loop
        cout << endl;
    }
    
    return 0;

}

