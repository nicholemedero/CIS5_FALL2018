/*
 * Calculate the percentage Gas Tax on a gallon of gas, and the profit made from
 * a gallon of gas given:
 * TAXES:
    * 39 cents for tax/gallon
    * 8% sales tax
    * 10 cents for gap and trad "fee" -tax on tax/gallon
    * 18.4 cents federal excise tax/gallon
 * PROFIT:
    *  6.5% oil company profit
 * Input (using cin) the amount it cost you per gallon the last time
 * you put gas in your car. Compare the percentages and the dollar amount of
 * profit gas companies vs. taxes to the government.
 */

/* 
 * File:   gastax.cpp
 * Author: Nichole Medero
 * CIS-5 Program Logic using C++
 * Created on September 26, 2018, 1:15 PM
 */

#include <iostream>

using namespace std;

int main( ) {
    
    float exciseTax, salesTax, tradeFee, fedTax, oilProfit, gasCost, 
            totalTax, totalTaxPerc, oilTax, oilTaxPerc, diffAmount, diffPerc;
    exciseTax = 0.39;
    salesTax = 0.08;
    tradeFee = 0.10;
    fedTax = 0.184;
    
    
    cout << "This program calculates the percentage of gas tax and the"
         << " percentage of profit made on a gallon of gas." << endl;
    cout << "Please input the price of gallon the last time you put"
         << " gas in your car:" << endl;
    cin >> gasCost;
    totalTax = (gasCost - (exciseTax + tradeFee + fedTax)) * salesTax;
    totalTaxPerc = (totalTax/gasCost) * 100;
    cout << "The amount of tax the government makes when gas is $" << gasCost << 
            " per gallon: $" << totalTax << " or " << totalTaxPerc<< "%." << endl;
    oilTax = gasCost * 0.065;
    oilTaxPerc = (oilTax/gasCost) * 100;
    cout << "The amount of tax an oil company makes when gas is $" << gasCost <<
            " per gallon: $" << oilTax << " or " << oilTaxPerc << "%." << endl;
    diffAmount = totalTax - oilTax;
    diffPerc = totalTaxPerc - oilTaxPerc;
    cout << "The difference between the two profits is: $" << diffAmount << 
            " or " << diffPerc << "%." << endl;
    
    return 0;
}

