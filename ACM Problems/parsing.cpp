#include <iostream>
#include <string>
#include <vector>

using namespace std;



struct report {
	string name;
	string start;
	string end;
	string location;
	string seen;
};

int main() {
	vector<report> vec;
	string name;
	while(!cin.eof()){
		string input;

		report rep;
		getline(cin,input);
		
		if(input[0] == '+') {
			//+NAME
			name = input.substr(1,input.size());//substr(start position, length)
		}
		else {
			rep.name = name;
			int index = input.find(",");
			rep.start = input.substr(0,index);
			
			int index2 = input.find(",",index+1);
			rep.end = input.substr(index+1,index2-index -1);
			
			int index3 = input.find(",",index2+1);
			rep.location = input.substr(index2+1,index3-index2 - 1);
			
			rep.seen = input.substr(index3+1,input.size()-index3 - 1);
			
			vec.push_back(rep);
		}
	}
	cout  << endl<<endl;
	for(int i = 0; i < vec.size();i++) {
		cout << vec[i].name << endl;
		cout << vec[i].start << endl;
		cout << vec[i].end << endl;
		cout << vec[i].location << endl;
		cout << vec[i].seen << endl;
	}
	
	return 0;
}
