#include <iostream>
using namespace std;

string cleaner(string);

int main()
{
	int n;
	string input;
	string clean;
	
	
	cin >> n;
	
		cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, input);
		// cout << cleaner(input) << endl;
		
		string cleanest = cleaner(input);
		bool isPalindrome = true;
		for (int j = 0; j < cleanest.length(); j++) {
			if (cleanest[j] != cleanest[cleanest.length() - j - 1]) {
				isPalindrome = false;
				break;
			}
			
		}
		if (isPalindrome == true)
				cout << "YES" << endl;
			else cout << "NO" << endl;
		
	}
	
}
string cleaner(string tempt){
	string clean;
	for (int i = 0; i < tempt.length(); i++) {
		if (tempt[i] <= 90 && tempt[i] >= 65) { // UPPERCASE
			clean += tempt[i] + 32;
			
		}
		if (tempt[i] >= 97 && tempt[i] <= 122) { //LOWERCASE
			clean += tempt[i];
		}
		
		if (tempt[i] >= 48 && tempt[i] <= 57) { //NUMBERES
			clean += tempt[i];
		}
	}
	return clean;
}