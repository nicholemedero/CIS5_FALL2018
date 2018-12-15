#include <iostream>
#include <map>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	
	map<string, int> ourMap;
	for(int i = 0; i < n; i++) {
		string input;  // intitialize input
		cin >> input; //read user input
		
		ourMap[input]++;  //iterating user input		
		if(ourMap[input] == 1) {
			cout << "OK" << endl;
		}
		else {
			cout << input << ourMap[input] - 1 << endl; 
		}
	}
	return 0;
}