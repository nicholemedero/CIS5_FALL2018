/*
 * Workers at a particular company have won a 7.6% pay increase retroactive for
 * 6 months. Write a program that takes an employee's previous annual salary 
 * as input, and outputs the amount of retroactive pay due the employee, the
 * annual salary, and the new monthly salary. Use a variable declaration with 
 * the modifier const to express the pay increase. Your program should allow the
 * calculation to be repeated as often as the user wishes.
 * 
 * Modify your program for Programming Project 2 so that it calculates the 
 * retroactive salary for a worker for any number of months, instead of just the
 * 
 */



#include <iostream>

using namespace std;


int main( ) {

    const double payIncrease = 0.076;
    double annualSal, retroPay, newAnnualSal, oldMonthlySal, newMonthlySal, months;
   
    cout << "Press return after entering a number.\n";
    cout << "Enter your previous annual salary:\n";
    cin >> annualSal;
    cout << "Enter the number of months you would like to calculate your "
            " salary for:\n";
    cin >> months;
    retroPay = ((annualSal * payIncrease) * months);
    oldMonthlySal = annualSal / 12;
    newAnnualSal = retroPay +  annualSal;
    newMonthlySal = oldMonthlySal + retroPay;
    
    cout << "Taken from your previous annual salary of $";
    cout << annualSal;
    cout << ". Your new annual salary including the 7.6% pay increase is $";
    cout << newAnnualSal;
    cout << ". The amount of retroactive pay due is $";
    cout << retroPay;
    cout << ". Your new monthly salary is $";
    cout << newMonthlySal;
    cout << ".";
    
    
    return 0;
}

