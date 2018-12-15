/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 25, 2018, 2:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float total = 0;
    float x;
    for(int i = 0; i <12; i++) {
        cin>>x;
        total = total + x; 
    }
    cout <<"$" << total/ 12 <<endl;
    return 0;
}

