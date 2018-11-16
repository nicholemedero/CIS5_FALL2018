/*
 * Problem 2
 * The Babylonian algorithm to computer the square root of a number n is as 
 * follows:
 * Make a guess at the answer (you can pick n/2 as your initial guess)
 * Computer r = n / guess
 * Set guess = (guess + r)/2
 * Go back to step 2 for as many iterations as necessary. The more that step 2
 * and 3 are repeated, the closer guess will become to the square root of n.
 * 
 * Write a program that inputs a double for n and iterates through the 
 * Babylonian algorithm 100 times.
 */



#include <iostream>

using namespace std;

int main( ) {

    double guess, r, n, count;
    
    while (count <= 100) {
        cout << "Press return after entering a number.\n";
        cout << "Enter a whole number:\n";
        cin >> n;
        cout << "Enter your guess that will be divided by n.\n";
        cin >> guess;
        r = n/guess;
        guess = (guess + r)/2;
        count = 0;
        
        cout << "The square root of ";
        cout << n;
        cout << " is ";
        cout << guess;
        count = count + 1;
        cout << endl;
        
        return 0;
    }
}
    

