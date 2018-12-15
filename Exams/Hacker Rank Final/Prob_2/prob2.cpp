/* 
 * File:   prob2.cpp
 * Author: Nichole Medero
 * Created on December 11, 2018, 11:09 AM
 * Purpose: Sorting an array of characters if specified correctly
 */

#include <iostream>//cout,cin
#include <cstring> //strlen()

using namespace std;

//Function Prototypes Here
int  read(char array[], int sizeIn); //read in the elements
void sort(char array[],int sizeIn); //if valid, sort into ascending order
void print(const char array[],int sizeIn); //print array elements

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    read(array, sizeIn);//Determine it's size
    sizeDet = strlen(array); //size detected
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet == sizeIn){
        sort(array,sizeIn); //Sort the array
        print(array,sizeIn);//Print the array
    }else{
        if(sizeDet > sizeIn) {
            cout<<"Input size greater than specified.";
        } else {
        cout<<"Input size less than specified.";
        }
    }
    
    //Exit
    return 0;
}

int  read(char array[], int sizeIn) {
    for(int i = 0; i < sizeIn; i++) {
        cin>>array[i];
    }
}

void sort(char array[],int sizeIn) { 
    int temp;
    for(int i = 0; i < sizeIn; i++) {
        for(int j = i + 1; j < sizeIn; i++) {
            if(array[i]> array[j]) {
                temp = array[j];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }  
}

void print(const char array[],int sizeIn) {
    for(int i = 0; i < sizeIn; i++) {
        cout<<array[i];
    }
}