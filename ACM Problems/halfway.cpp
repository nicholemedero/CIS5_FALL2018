#include <iostream>

using namespace std;
long long int Medwy(long long int n );

int main() {
	long long int k=0;// Count of  cells 
	long long int n;
	cin>>n;
	
	long long int sum=Medwy(n);
	
	for(long long int i=1;i<=n;i++){
		for(long long int j=i+1;j<=n;j++){
			k++;
			if (k>=sum){
				cout<<i<<endl;
				return 0;
			}
		}
	}
	return 0;
}
long long int Medwy(long long int n ){
	long long int sum;
	
	sum=n*(n-1)/4; //Medway formula
	
	
	return sum;
}