/*
 * An ISP has 3 different subscription packages:
 * 
 *  a. $16.99/month, 10 hours access Additional hours are $0.95 up to 20 hours
 *      then $0.85 for all additional hours.
 *  b. $26.99/month, 20 hours access. Additional hours are $0.74 up to 30 hours
 *      then $0.64 for all additional hours.
 *  c. 36.99/month unlimited access
 * 
 * Input package a, b, or c then hours access then outputs $ amount with package
 * they should switch to save most amount of money. Calculate money saved and
 * output as well.
 * 
 * Sample Input
 * a 5
 * Sample Output
 * $16.99 A $0.00
 * 
 * Sample Input
 * a 55
 * Sample Output
 * $56.24 C $19.25
 * 
 * Sample Input
 * b 45
 * Sample Output
 * $43.99 C $7.00
 */

/* 
 * File:   ispcharge.cpp
 * Author: Nichole Medero
 * Created on October 26, 2018, 10:47 PM
 * Purpose: ISP charges
 */


#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes Here     
void caseA(int hours);
//executed if the user inputs package a from isp

void caseB(int hours);
//executed if the user inputs package b from isp

void caseC(int hours);
//executed if the user inputs package c from isp

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables Here
    char pack;
    unsigned short hours;

    //Input or initialize values Here
    cout << "ISP charges for service delivered." << endl;
    cout << "Input package A,B,C then hours used for the month" << endl;
    cin >> pack >> hours;

    if (pack == 'a' || pack == 'A') { 
        
        caseA(hours); //isp package a/A
                
    } else if (pack == 'b' || pack == 'B') { 
        
        caseB(hours); //isp package b/B
        
    } else if (pack == 'c' || pack == 'C') { 
        
        caseC(hours); //isp package c/C
        
    } else if (pack != 'a' || pack != 'A' || pack != 'b' || pack != 'B' || 
            pack != 'c' || pack != 'C') {           //invalid packages
        
        cout<<"That is not a valid package."<<endl;
        
    }

    //Exit
    return 0;
}

void caseA(int hours) {
    
    const float rate = 16.99;
    float subtotal, total, savings;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if (hours <= 10) {
        
        total = rate;
        savings = total - rate;
        cout<<"$"<<total<<" A $"<<savings<<endl;
        
    } else if (hours > 10 && hours <= 20) {
            
        subtotal = rate;
        
        hours -= 10; 
        total = subtotal + (hours * 0.95);
        savings = total - 26.99;
        cout<<"$"<<total<<" B $"<<savings<<endl;
        
    } else if (hours >= 21) {
        
        subtotal = rate;
        subtotal += (10 * 0.95); 
        hours -= 20;
        total = subtotal + (hours * 0.85); //hours after 20
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
    }
    
}

void caseB(int hours) {
    
    const float rate = 26.99;
    float subtotal, total, savings;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    if (hours <= 20) {
        
        total = rate;
        savings = total - rate;
        cout<<"$"<<total<<" B $"<<savings<<endl;
        
    } else if (hours >= 21 && hours <= 30) {
            
        subtotal = rate;
        hours -= 20; //remainder after first 20 hours
        total = subtotal + (hours * 0.74);
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
        
    } else if (hours >= 31) {
        
        subtotal = rate;
        subtotal += (10 * 0.74); 
        hours -= 30;
        total = subtotal + (hours * 0.64); //hours after 30
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
    }
}

void caseC(int hours) {
    
    const float rate = 36.99;
    float  total, savings;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    total = rate;
    savings = total - rate;
    cout<<"$"<<total<<" C $"<<savings<<endl;
      
}