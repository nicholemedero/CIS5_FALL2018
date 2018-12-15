#include <iostream>
#include <map>

using namespace std;
void vowelsPresent(string input);
//does a thing

int main(){
	string input;
	cin>>input;

	vowelsPresent(input);
	
	return 0;
}
void vowelsPresent(string input){
	map<char,int>oursecondMap;
	oursecondMap['a']=0;
	oursecondMap['e']=0;
	oursecondMap['i']=0;
	oursecondMap['o']=0;
	oursecondMap['u']=0;
	
	for (int i=0; i<input.length();i++){
		if (oursecondMap.find(input[i])!= oursecondMap.end())
			oursecondMap[input[i]]++;	
	}
	
	map<char,int>::iterator it;
	for(it=oursecondMap.begin(); it!=oursecondMap.end(); it++){
		if (it->second<=0){ //Checking value is less than equal to 0
			cout<<"NO"<<endl;
			return;
		}	
	}
	cout<<"YES"<<endl;
	return;
}