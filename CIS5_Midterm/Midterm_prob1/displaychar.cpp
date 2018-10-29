//For the X shape, the x was displayed, but I could not code to decrement by
//column, instead I decremented at each row.

/*
 * Input a number [1-50] representing the size of the shape and then a character
 * [x,b,f] which represents the shape (x shape, backward slash, forward slash.
 * 
 * Note: Even number outputs are different from odd.
 * 
 * Read in only 2 values as such:
 * Inputs:      5 x     4 x     5 b     4 f
 * 
 * Outputs: 5   1       1  4     5          4
 *           4 2         23       4        3
 *            3          23        3      2
 *           4 2        1  4        2   1
 *          5   1                    1
 */

/* 
 * CIS-5 Midterm: Hacker Rank Problem 1
 * File:   main.cpp
 * Author: Nichole Medero
 * Created on October 24, 2018 at 12:55PM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>

using namespace std;


//Function Prototypes Here
void xShape(unsigned short x, char shape);

void backShape(unsigned short x, char shape);

void forwardShape(unsigned short x, char shape);

//Program Execution Begins Here
int main(int argc, char** argv) {
	
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
	
    //if statements statements & processes for char selected
    if (shape == 'x') { //x shape
        
        xShape(x, shape);
        
    } else if (shape == 'b') { //backslash shape
        
        backShape(x, shape);
        
    } else if (shape == 'f') { //forward slash shape
        
        forwardShape(x, shape);
        
    } else if (shape != 'x' && shape != 'b' && shape != 'f') {
        
        cout<<"That is not a valid input.";
        
    }

    //Exit
    return 0;
}

void xShape(unsigned short x, char shape) {
    
    int shapeX = x; //to avoid conflict with the condition statement in for loops

    for (int rows = 1; rows <= x; rows++) {
        for (int cols = 1; cols <= x; cols++) {
            if (rows == cols  || cols == ((x+1)-rows)) { //display number where i 
                                                        //(rows) and j (columns) 
                                                        //are equal
                cout<<shapeX;
                
            } else {
                
                cout<<" "; //otherwise display a space
                
            }
           
        } 
        shapeX--; //decrements x at each row, should decrement at each column
                  //but could not find the proper placement
        cout<<endl;
    }
    	
}

void backShape(unsigned short x, char shape) {
    
    int shapeX = x; //to avoid conflict with the condition statement in for loops

    for (int rows = 1; rows <= x; rows++) {
        for (int cols = 1; cols <= x; cols++) {
            if (rows == cols) { 
                
                cout<<shapeX;
                
            } else {
                
                cout<<" "; //otherwise display a space
                
            }
           
        } 
        shapeX--; //decrements x at each row
        cout<<endl;
    }
    
}

void forwardShape(unsigned short x, char shape) {
    
    int shapeX = x; //to avoid conflict with the condition statement in for loops
    
    for (int rows = x; rows >= 1; rows--) { //flips the slash
        for (int cols = 1; cols <= x; cols++) {
            if (cols == rows) { 
                
                cout<<shapeX;
                
            } else {
                
                cout<<" "; //otherwise display a space
                
            }
           
        } 
        shapeX--; //decrements x at each row (should be column)
        cout<<endl;
    }
    
}