/*
 * Write a program that reads in ten whole numbers and that outputs the sum of 
 * all the numbers greater than zero, the sum of all the numbers less than zero
 * (which will be a negative number or zero) and the sum of all the numbers,
 * whether positive or negative, or zero. The user enters the ten numbers just
 * once each and the user can enter them in any order. Your program should not
 * ask the user to enter positive or negative numbers separately.
 */


#include <iostream>

using namespace std;

int main( ) {

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, greaterSum,
            lesserSum, totalSum, greaterAv, lesserAv, totalAv;
    
    cout << "Press enter after providing input.\n";
    cout << "Enter 10 numbers (separated by spaces)\n";
    cin >> num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    
    totalSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    
    if (num1 > 0) 
        greaterSum = num1;
        else if (num1 <= 0) 
            lesserSum = num1;
    if (num2 > 0) 
        greaterSum = num1 + num2;
            else if (num2 <= 0) 
            lesserSum = num1 + num2;
    if (num3 > 0)
        greaterSum = num1 + num2 + num3;
        else if (num3 <= 0) 
            lesserSum = num1 + num2 + num3;
    if (num4 > 0)
        greaterSum = num1 + num2 + num3 + num4;
            else if (num4 <= 0)
            lesserSum = num1 + num2 + num3 + num4;
    if (num5 > 0)
        greaterSum = num1 + num2 + num3 + num4 + num5;
        else if (num5 <= 0) 
            lesserSum = num1 + num2 + num3 + num4 + num5;
    if (num6 > 0) 
        greaterSum = num1 + num2 + num3 + num4 + num5 + num6;
            else if (num6 <= 0) 
            lesserSum = num1 + num2 + num3 + num4 + num5 + num6;
    if (num7 > 0) 
        greaterSum = num1 + num2 + num3 + num4 + num5 + num6 + num7;
        else if (num7 <= 0) 
            lesserSum = num1 + num2 + num3 + num4 + num5 + num6 + num7;
    if (num8 > 0) 
        greaterSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
            else if (num8 <= 0) 
            lesserSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8;
    if (num9 > 0) 
        greaterSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
        else if (num9 <= 0) 
            lesserSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;
    if (num10 > 0)
        greaterSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
            else if (num10 <= 0)
            lesserSum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
    
    greaterAv = greaterSum / 10;
    lesserAv = lesserSum / 10;
    totalAv = totalSum / 10;
    
    cout <<"The total > 0 sum is :";
    cout << greaterSum;
    cout << "\n The total <= 0 sum is:";
    cout << lesserSum;
    cout << "\n The total sum is:";
    cout << totalSum;
    cout << "\n The greater average is:";
    cout << greaterAv;
    cout << "\n The lesser average is :";
    cout << lesserAv;
    cout << "\n The total average is :";
    cout << totalAv;
    
    
   
    
    
    return 0;
}


