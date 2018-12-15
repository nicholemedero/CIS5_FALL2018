/*
 * File:   prob4.cpp
 * Author: Nichole Medero
 * Created on December 10, 2018, 5:51 PM
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void print(int array[], int &size, int &max, int &min, int &sum);

int main(int argc, char** argv) {

    //Declare all Variables Here
    
    int sum,min,max,size;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>size;

    //Now read in the array of integers
    int array[5] = { 1, 10, 100, 1000, 10000 };
    
    //Array Process Calculations

    max = 0;
    min;
    sum = 0;
    
    
    for(int count = 0; count < 5; count++) { //highest int calculation
        if (array[count] > max) {
            max = array[count];
        }
    }
    
    for(int count = 0; count < 5; count++) { //lowest int calculation
        if (array[count] < min) {
            min = array[count];
        }
    }
        
    for(int total = 0; total < size; total++) { //sum calculation
        sum += array[total];
    }
   
    print(array, size, max, min, sum);

    //Exit
    return 0;
}

void print(int array[], int &size, int &max, int &min, int &sum) { //print results
    
    int j = 0; //index display
    
    cout<<"Now read the Array"<<endl;
    for(int i = 0; i < size; i++) {
        cout<<"a["<<j<<"]\t= "<<array[i]<<endl;
        j++;
    }
    cout<<"Min\t= "<<min<<endl;
    cout<<"Max\t= "<<max<<endl;
    cout<<"Sum\t= "<<sum<<endl;
    
}

/*
 * 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print


//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}

 
 */