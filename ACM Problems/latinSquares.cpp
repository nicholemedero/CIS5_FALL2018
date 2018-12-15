#include <iostream>

using namespace std;

bool uniqueRow(int **input,int n); //
bool uniqueCol(int **input,int n);
bool order(int **input, int n);
void output(int **input,int n);


int main() {
	int n;
	string cat;
	
	cin>>n;
	const int ROWS = n, COLS = n;
	int **latinSquare = new int *[n];
	
	for(int row = 0; row < n; row++) {
		latinSquare[row] = new int [n];
		cin>>cat;
		for(int col = 0; col < n; col++) {

			if (cat[col] >='A'&& cat[col]<='Z')
				latinSquare[row][col]=cat[col]-55;
			
			if (cat[col]>='0'&& cat[col]<='9')
				latinSquare[row][col]=cat[col]-48;
		}
	}
	output(latinSquare, n);
}

bool uniqueRow(int **input,int n) {
	for(int row = 0; row < n; row++) {
		for(int col = 0; col < n; col++) {
			for(int check = col +1; check < n; check++) {
				if(input[row][col] == input[row][check]) {
					return false;
					break;
				}				
			}
		}
	} 
	return true;
}

bool uniqueCol(int **input,int n) {
	for(int col = 0; col < n; col++) {
		for(int row = 0; row < n; row++) {
			for(int check = row +1; check < n; check++) {
				if(input[row][col] == input[check][col]) {
					return false;
					break;
				}				
			}
		}
	} 
	return true;
}

void output(int **input,int n) {
	if(uniqueCol(input, n) == false && uniqueRow(input, n) == false) {
		cout<<"No."<<endl;
	}
	else if(order(input, n)) {
		cout<<"Reduced"<<endl;
	}
	else{
		cout<<"Not Reduced"<<endl;
	}
}
bool order(int **input, int n){
	for (int i=0; i<n;i++){
		if (i!=input[0][i])
			return false;
	}
	for (int i=0; i<n;i++){
		if (i!=input[i][0])
			return false;
	}
	return true; 	
}

