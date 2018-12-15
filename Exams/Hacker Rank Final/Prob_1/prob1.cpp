
/* 
 * File:   prob1.cpp
 * Author: Nichole Medero
 * Created on December 9, 2018, 3:54 PM
 * Purpose:  Input something, output it reversed with some modifications
 * Note:    Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *          12300 - 999 = 11301 after subtraction
 *          12300 = 00321 = 321 after reversal and no subtraction
 */

#include <iostream>
#include <cstring>

using namespace std;

bool  inRange(int temp[]);//Output true,unsigned or false
short subtrct(signed short snShort,unsigned short unShort,int num);


int main(int argc, char** argv) {

    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    int  digits[SIZE];    //digits or not
    int temp[]; //temp array for reversal
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    int i,j; //index for user input & index for reversal
    int num = 999;
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    
    for (i = 0; i < SIZE; i++) {
        cin>>digits[i]; //user input
    }
    
    //reversal
    j = i - 1; //array index minus 1
    for(i = 0; i < j; i++) {
        temp[i] = digits[j];
        j--;
    }
    
    snShort = 0;
    for (i = 0; i < SIZE; i++) { //integer for reversed numbers
        snShort *= 10; //creates placeholder for next element in array
        snShort += temp[i]; //addition of next array element to integer
    }
    
    unShort = 0;
    for (int m = 0; m < SIZE; i++ ) {//integer for original numbers
        unShort *= 10;
        unShort += digits[i];
    }
           

    //Test if it is in the Range of an unsigned short
    if(!inRange(temp)){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,unShort,num);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}

bool  inRange(int temp[]) {
    bool range = true;
    for(int i = 0; i < temp.length(); i++) {
        if(temp[i] >= 'A' && temp[i] <= 'Z') {
            return false;
        } else if (temp[i] >= 'a' && temp[i] <= 'z') {
            return false;
        }
    }
    return range;
}

short subtrct(signed short snShort,unsigned short unShort,int num) {
    
    int high, low;
    high = snShort - 999; //top range
    low = unShort - 999; //bottom range
    
    if (high <= snShort && low >= unShort) {
        return subtrct;
    } else {
        cout<<"No Conversion Possible"<<endl;
    }
    
}