/* 
 * File:   prob6.cpp
 * Author: Nichole Medero
 * Created on December 11, 2018, 7:47 PM
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int array[][COLMAX],int &row,int &col);//Prompt for size then table
void sum(const int array[][COLMAX],int row,int col);//Sum rows,col,grand total
void print(const int array[][COLMAX],const int augArr[][COLMAX],int row,int col);//Either table can be printed

//Program Execution Begins Here

int main(int argc, char** argv) {

    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augArr[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;  
    
    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,augArr,row,col);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(array,augArr,row+1,col+1);//setw(10)
    
    //Exit
    return 0;
}
void read(int array[][COLMAX],int &row,int &col) { //user input
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin>>array[i][j];
        }
        cout<<endl;
    }
}

void sum(const int array[][COLMAX],int row, int col, int augArr[][COLMAX]) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
           augArr[i][j] = array[i][j]; //transfer user input to new array
        }
    }
    
    //sums for rows
    int rowsum = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            rowsum += augArr[i][j];
            augArr[i][col-1] = rowsum; //assign sum to according cell   
        }
    rowsum = 0; //clear sum for next row
    }
    
    //sums for columns
    int colsum = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; i++) {
            colsum += augArr[j][i];
            augArr[row-1][i] = colsum;
        }
        rowsum=0;
    }
    
    //table sum
    int tsum = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            tsum += augArr[i][j]; //total sum
            augArr[row+1][col+1] = tsum; //assign tsum to rightmost bottom most cell         
        }
        
    }
            
}

void print(const int array[][COLMAX], const int augArr[][COLMAX],int row,int col) {
    
    cout<<"The Original Array"<<endl;
    for(int i = 0; i < row-1; i++) {
        for(int j = 0; i < col-1; i++) {
            cout<<array[i][j]; //print original array
        }
        cout<<endl;
    }
    
    cout<<"The Augmented Array"<<endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout<<setw(10)<<augArr[i][j]<<setw(10); //print new array
        }
        cout<<endl;
    }
}