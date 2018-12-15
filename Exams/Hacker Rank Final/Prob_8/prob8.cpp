/* 
 * File:   prob.cpp
 * Author: Nichole Medero
 * Created on December 13, 2018, 7:10 PM
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char array[][COLMAX],int &rowDet);//Outputs row and columns detected from input
void sort(char array[][COLMAX],int &rowIn,int colIn);//Sort by row
void print(const char array[][COLMAX],int rowIn,int colIn);//Print the sorted 2-D array

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    
    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
    
}

int read(char array[][COLMAX],int &rowDet) {   
    for(int i = 0; i < rowDet; i++) {
        for(int j = 0; j < COLMAX; j++) {
            cin>>array[i][j];
        }
        cout<<endl;
    }
}

void sort(char array[][COLMAX],int &rowIn,int colIn) { //DESCENDING
    int swap;
    for(int i = 0; i < rowIn; i++) { //sort for integers
        if(array[i][0] < array[i+1][0]) {
            for(int j = 0; j < COLMAX; j++) {
                swap=array[i][j];
                array[i][j]=array[i+1][j+1];
                array[i+1][j+1] = swap;        
            }
        }
    }
}

void print(const char array[][COLMAX],int rowIn,int colIn) {
    for(int i = 0; i < rowIn; i++) {
        for(int j = 0; j < COLMAX; j++) {
            cout<<array[i][j];
        }
    cout<<endl;
    }
}