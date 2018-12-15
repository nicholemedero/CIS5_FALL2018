

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int n = 0;
    float total = 0;
    float l;
    
    do{
        cin>>l;
        if(l != 0.0f){
            while(total<=l){
                n++;
                total += (1.0f/(n+1));
            };
            cout << n << " card(s)" << endl;
            total = 0;
            n = 0;
        }
    }while(l != 0.0f);
   
    return 0;
}

