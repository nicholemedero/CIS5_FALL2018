/* Midterm: Hacker Rank Problem 2
 * 
 * Read a 4 character number. Output the result in the following format.
 * 
 * Input 9837
 * Output
 * 3 ***
 * 7 *******
 * 8 ********
 * 9 *********
 * 
 * If one of the numbers is not a digit, then put a ? mark
 * Input 98a3
 * Output
 * 3 ***
 * a ?
 * 8 ********
 * 9 *********
 * 
 * Prompt the user before the input with,
 *      cout<<"Create a histogram chart."<<endl;
 *      cout<<"Input 4 digits as characters."<<endl;
 */

/* 
 * File:   histogram.cpp
 * Author: Nichole Medero
 * Created on October 27, 2018, 4:29 PM
 * Purpose: Histogram
 */


//System Libraries Here
#include <iostream>

using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int ast;
    int code = 4;
    char digits[code];
        
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>digits; //digits will be read as individual characters


    //Output/Calculations
    for (int i = 3; i >= 0; i--) { //iterates through the input backwards
        
        cout<<digits[i]<<" ";
        
        if (digits[i] <= 47 || digits[i] >= 58) { //outputs ? if character input 
                                                //is a letter
            cout<<"?";
            
        } else {
            
            ast = digits[i] - 48; //0 begins at 48 on the ascii table
                                  //subtracting 48 results in the # of * to output
            for (int j = 0; j < ast ; j++) {
                
                cout<<"*"; //only output as many times as the value after
                           //ascii table conversion 
            }
        }
        
    cout<<endl;
    }
    
//Exit    
return 0;
}
    
    
    
