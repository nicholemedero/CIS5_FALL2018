/*
 * Write a program that starts with a quantity in mph and converts the quantity
 * into minutes and seconds per mile. As an example, the proper output for an
 * input of 6.5 mph should be 9 minutes and 13.8 seconds per mile. 
 */



#include <iostream>

using namespace std;


int main( ) {
    double runPaceMin, runPaceSec, runSpeed;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter a speed (e.g., 6.5) at mph:";
    cin >> runSpeed;
    runPaceMin = runSpeed / 60;
    
    cout << "If a runner is going ";
    cout << runSpeed;
    cout << " mph, then they are running at a speed of ";
    cout << runPaceMin;
    cout << " minutes per mile."
    

    return 0;
}

