#include <iostream>
using namespace std;

int main(){
    float length;
    float sum = 0;
    float n = 2;
    int cards = 0;
    cin >> length;
    
    while(sum < length) {
        cout << "sum before summation " << sum << endl;
        sum = sum + float(1/n);
        cout << "sum after summation " << sum << endl;
        cout << " before n = " << n << endl;
        n = n + 1;
        cout << "after n = " << n << endl;
        
        cout << "before num cards: " << cards << endl;
        cards++;
         cout << "after num cards: " << cards << endl;
    }
    cout << cards;
    
    return 0;
}