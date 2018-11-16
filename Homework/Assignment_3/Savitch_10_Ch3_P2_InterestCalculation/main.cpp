/*
 * Write a program to compute the interest due, total amount due, and the
 * minimum payment for a revolving credit account. The program accepts the
 * account balance as input, then adds on the interest to get the total amount
 * due. The rate schedules are the following: The interest is 1.5% on the first
 * $1,000 and 1% on any amount over that. The minimum payment is the total
 * amount due if that is $10 or less; otherwise, it is $10 or 10% of the total
 * amount owed, whichever is larger. Your program should include a loop that
 * lets the user repeat this calculation until the user says they are done.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Course: CIS-5 Programming Logic with C++
 * Created on September 22, 2018, 9:04 PM
 */

/*
 * PSEUDOCODE:
 * 1. Allow user to input account balance
 * 2. Add interest to get total amount due
 * 3. Interest is 1.5 on the first 1,000 and 1 thereafter
 * 4. If the total is $10 or less, they must pay that total for the min payment
 * 5. If the total is $10 or 10% of the total due, that is their min payment
 * 6. Loop this to repeat upon user request
 */

#include <iostream>
using namespace std;


int main( ) 
{
    float interest, interestAfter, balance, totalDue, minPay;
    char choice;
    interest = 0.015;
    interestAfter = 0.010;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    
    do {
        cout << "This program calculates your amount due and your minimum"
         << " payment." << endl;
        cout << "Enter your current account balance:" << endl;
        cin >> balance;
    
    if (balance <= 1000) {
        totalDue = balance * interest;
        if (totalDue <= 10) {
            minPay = totalDue;
        }
            else if (balance > 1000) {
                totalDue = balance * interestAfter;
                minPay = totalDue * 0.10;
            }
    }
        
    cout << "Your amount due totals to $" << totalDue << " and your minimum"
         << " payment is $" << minPay << "." << endl;
    cout << "Would you like to calculate another amount?" 
         << " Y for yes, N for no." << endl;
    cin >> choice;
    
    } while (choice == 'Y' || choice == 'y');
    
            
    return 0;
}

