//Was able to pass the first test case but not the second

/*
 * Just another sequence, f(x) = x - x x^3/3! + x^5/5! - x^7/7! + ...
 * 
 * Input x and the number of terms used in the sequence, output the result.
 * 
 * Note: x^1 = x, x^2 = x * x, x^3 = x * x * x
 *      3! = 1 * 2 * 3  5! = 1 * 2 * 3 * 4 * 5
 * 
 * Prompt
 *      Calculate a series f(x) = x - x x^3/3! + x^5/5! - x^7/7! + .......
 *      Input x and the number of terms, output f(x)
 * 
 * Input 1 1
 * Output 1.000000
 * 
 * Input 1 2
 * Output
 * 0.833333
 */

/* 
 * File:   factorials.cpp
 * Author: Nichole Medero
 * Created on October 27, 2018, 4:45 PM
 * Purpose: Infinite Series
 */


//System Libraries Here
#include <iostream>
#include <cmath> //power function
#include <iomanip>

using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int x, n;
    float total;
    
    //x = factorial
    //n = number of terms
    //total = sum of all products
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6); //show 6 places after the decimal
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>n;   
    

    //Calculation
    for (int i = 1; i <= n; i++) { //loop only as many terms (n) input
                                   //i is initialized to 1 because 0 would cause an error

        total += (n)/(pow(x, i)); //input x raised to the power of i (incremented)
        
    }
    cout<<static_cast<float>(total);
    
    //Exit
    return 0;
}