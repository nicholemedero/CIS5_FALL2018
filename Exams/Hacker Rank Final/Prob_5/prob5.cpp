/* 
 * File:   prob5.cpp
 * Author: Nichole Medero
 * Created on December 10, 2018, 10:19 PM
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &even, vector<int> &odd, int &num, int temp[]);
void copy(int temp[], int array[][COLMAX], int &num);
void prntVec(vector<int> &even, vector<int> &odd, int &num);//int n is the format setw(n)
void prntAry(const int array[][COLMAX],int &num);

//Program Execution Begins Here
int main(int argc, char** argv) {

//   Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    int num; //number of integers
    int temp[num];
    
    
    
    cout<<"Input number of integers to input."<<endl;
    cin>>num;
    cout<<"Input each number."<<endl;
        for(int i = 0; i < num; i++) {
            cin>>temp[i];
        }
    
    
    //Input data and place even in one vector odd in the other
    read(even,odd,num,temp);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,num);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array setw(10)
    prntAry(array,num);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

void read(vector<int> &even, vector<int> &odd, int &num, int temp[]) {
    int input;
    for(int i = 0; i < num; i++) {
        input = temp[i];
        
        if (input % 2 == 0) {
                even.push_back(input); //store element in even
            } else {
                odd.push_back(input); //store element in odd
            }
    }
}

void prntVec(vector<int> &even, vector<int> &odd, int &num) {
    
    cout << setw(10) << "Vector"
         << setw(10) << "Even"
         << setw(10) << "Odd" <<endl;
    
    for (int i = 0; i < even.size(); i++) {
        cout<<even[i]<<endl;
    }
    
    for (int i = 0; i < odd.size(); i++) {
        cout<<odd[i]<<endl;
    }
    
}

void copy(int temp[], int array[][COLMAX], int &num) { //array
    
    int input;
    
    for(int i = 0; i < num; i++) {
        input = temp[i];
        
        if (input % 2 == 0) {
            input = array[i][0]; //store element in even column
        } else {
            input = array[i][1]; //store element in odd column
        }
    }
    
}

void prntAry(const int array[][COLMAX],int &num) {
    
   cout << setw(10) << "Array"
        << setw(10) << "Even"
        << setw(10) << "Odd" <<endl;
    
    for (int i = 0; i < num; i++) { //row
        for (int j = 0; j < COLMAX; j++) { //column
            cout<<array[i][j]<<setw(10); //2 elements per row
        }
    cout<<endl; //new line for each row
    }
    
}
