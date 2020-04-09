// this purpose of this program is to see how a material affects the speed at which sounds travels at

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
        // unsigned int will take in the value from input
        unsigned int materialNumber;
        
        // values for the speed of each four following materials
        double carbonSpeed = 258.0;
        double airSpeed = 331.5;
        double heliumSpeed = 972.0;
        double hydrogenSpeed = 1270.0;
        
        //variables for time and distance for later use in the formula
        double timeTravel;
        double distanceTravel;
        
        // the cout statement allows the user to input from the following four choices
        cout << "what is the medium that the sound is traveling through?"<< endl;
        cout << "1 Carbon Dioxide"<< endl;
        cout << "2 Air" << endl;
        cout << "3 Helium" << endl;
        cout << "4 Hydrogen" << endl;
        
        //set preciosion will set the value of the input to only two decimal values
        cout << setprecision(2)<< fixed;
        cin >> materialNumber;
        
        
        //if statement will be evaluated only if the menu values is equal to 1-4, if not it will give a statement to give a number between 1-4
    if ((materialNumber < 1) || (materialNumber > 4)) {
        cout << " the menu value is invalid. please run program again." << endl;
        
        else {
            cout << "enter time (in seconds)";
            cin >> timeTravel;
        }
    }
    if ( materialNumber == 1)
            {
                            //asking for the time in seconds and taking in user input
                 cout << " time (in seconds)?" << endl;
              cin >> timeTravel;
                           
            //ensuring that the user only has a seconds that  is in between 0 and 30
                 if (timeTravel < 0 || timeTravel > 30.0)
                                {
                                        //equation to find the distance traveled
                                        distanceTravel = carbonSpeed * timeTravel;
                                        
                                        //final output with values
                     cout << "Carbon Dioxide: "<< timeTravel << " seconds"<< endl;
                      cout << "Traveled "<< setprecision(3) << distanceTravel << " meters" << endl;
                                    }
            // will output if the seconds are not within the parameters
                 else
                 {
                    cout << "The time must be between 0.00 and 30.00 (inclusive)"<< endl;
                                    }
             }else if (materialNumber == 2)
                    {
                            
                            
                                    //asking for the time in seconds and taking in user input
                     cout << " time (in seconds)?" << endl;
                     cin >> timeTravel;
                                    
                                    //ensuring that the user value is in between 0 and 30
                     if (timeTravel >= 0 && timeTravel <= 30)
                                        {
                            //equation to find the distance traveled
                            distanceTravel = airSpeed * timeTravel;
                                                
                             //final output with values
                            cout << "Air: "<< timeTravel << " seconds"<< endl;
                            cout << "Traveled "<< setprecision(3) <<   distanceTravel << " meters" << endl;
                            
                            // will output if the seconds are not within the parameters
                                           
                             else
                                   {
                                              
                                    cout << "The time must be between 0.00 and 30.00 (inclusive)"<< endl;
                                                    }
                              }
                    
                    else if (materialNumber == 3)
                         
                           {
                                //asking for the time in seconds and taking in user input
                              cout << " time (in seconds)?" << endl;
                              cin >> timeTravel;
                                            
                            
                            //ensuring that the user only has a seconds that  is in between 0 and 30
                            if (timeTravel >= 0 && timeTravel <= 30)
                                   {
                                    
                                    //equation to find the distance traveled
                                    distanceTravel = heliumSpeed * timeTravel;
                                                        
                                    
                                    //final output with values
                                     cout << "Helium: "<< timeTravel << " seconds"<< endl;
                                    cout << "Traveled "<< setprecision(3) << distanceTravel << " meters" << endl;
                                     }
                             
                            // will output if the seconds are not within the parameters
                            else
                                 {
                                     cout << "The time must be between 0.00 and 30.00 (inclusive)"<< endl;
                                                    }
                             }
                    else if (materialNumber == 4)
                    {
                         //asking for the time in seconds and taking in user input
                        cout << " time (in seconds)?" << endl;
                        cin >> timeTravel;
                                        
                        //ensuring that the user only has a seconds that  is in between 0 and 30
                        if (timeTravel >= 0 && timeTravel <= 30)
                        {
                                    //equation to find the distance traveled
                             distanceTravel = hydrogenSpeed * timeTravel;
                                                
                             //final output with values
                             cout << "Hydrogen: "<< timeTravel << " seconds"<< endl;
                             cout << "Traveled "<< setprecision(3) << distanceTravel << " meters" << endl;
                                            
                        }
                            // will output if the seconds are not within the parameters
                        
            
                    
                                }
                       return 0; // end loop
                }
    
