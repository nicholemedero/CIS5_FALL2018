/*
 * Develop an application that will determine the gross pay for employees. The
 * company pays "straight-time" for the first 20 hours worked, time and a half 
 * for all hours worked in excess of 20 hours but less than 40 hours, and double
 * time for any hours worked over 40 hours. Inputs to the program would be
 * hours worked and rate of page. Output would be gross pay.
 * 
 * Prompt:
 *      cout<<"Paycheck Calculation."<<endl;
 *      cout<<"Input payRate in $'s/hour and hours worked."<<endl;
 * 
 * Input 10 50
 * Output
 * $700.00
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Created on October 27, 2018, 4:41 PM
 * Purpose: Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float payRate, grossPay;
    unsigned short hours;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Input
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hours;
    
    //Calculate Paycheck and Output
    if (hours <= 20) { //if an employee works 20 or less hours
        
        grossPay = hours * payRate; //pay rate
        
        cout<<"$"<<grossPay;
        
    } else if (hours <= 21 && hours >= 40) { //if an employee works over 20/below 40
        
        grossPay = hours * payRate; //first 20 hours
        hours -= 20; //remaining hours calculated
        grossPay += (hours * (payRate * 1.5)); //pay rate multiplied by 1.5
        
        cout<<"$"<<grossPay;
        
    } else if (hours > 40) { //if an employee works over 40 hours
        
        grossPay = 20 * payRate; //first 20 hours
        grossPay += (20 * (payRate * 1.5)); //hours after 20 and before 40
        hours -= 40; //remaining hours calculated
        grossPay += + (hours * (payRate * 2.0)); //pay rate doubled for hours after 40
        
        cout<<"$"<<grossPay;
        
    }
    
    //Exit
    return 0;
}

