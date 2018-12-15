/* 
 * File:   prob7.cpp
 * Author: Nichole Medero
 * Created on December 13, 2018, 12:55 PM
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

//Function Prototypes Here
void srchAll(const char sent[],const char match[],int LINE, string pattern);//Search for all occurrences
void print(const char match[], int LINE);//Print the character arrays
void print(const int sent[], string pattern); //Print the array of indexes where the pattern found

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sent[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    string pattern; 
            
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sent,LINE);
    cout<<"Input a pattern."<<endl;
    cin>>pattern;
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sent,match,LINE,pattern);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sent,pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match,LINE);
    
    //Exit
    return 0;
    
}

void srchAll(const char sent[],const char match[],int LINE, string pattern) {
    for(int i = 0; i < LINE; i++) {
        if(sent[i] != pattern) { //comparison
            cout<<"None";
            return 0;
        } else {
            for(int j = 0; j < LINE; j++) {
                match[j] = i; //assign index to new array
            }
        }
    }
}

void print(const char match[], int LINE) {
    for(int i = 0; i < LINE; i++ ) {
        cout<<match[i]<<" "; //print match array
    }
}

void print(const int sent[], int LINE, string pattern) {
    for(int i = 0; i < LINE; i++) {
        cout<<sent[i]<<endl;
    }
    cout<<pattern<<endl;
}