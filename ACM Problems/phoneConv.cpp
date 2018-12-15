#include <iostream>
#include <string>
using namespace std;

string convertNum(string temp);
//convert letters to numbers with ascii values

char conversion(char temp);
//converts letters to numbers

int search (string [], string, int );


int main()
{
	
	string telInput, outputNum;
	int telOutput, num;
	
	cout<<"Enter the number of telephone numbers:" <<endl;
	cin>>num;
	string array[num];
	int counter[num];
	for(int i = 0; i < num; i++)
		{
			array[i]="";
			counter[i]=0;
		}

	cout<<"Enter the telephone number:" << endl;
	
	
	for(int count = 0; count < num; count++)
	{
		cin>>telInput;
		outputNum = convertNum(telInput);
		int index = search(array, outputNum, num);
		if (index!=-1)
			counter[index]++;
		else {
			counter[count]=1;
			array[count]=outputNum;
		}
	}
	for (int i=0; i<num;i++){
			if(counter[i] > 1) cout<<array[i]<<" "<<counter[i]<<endl;
		
	}
}
int search (string array[], string x , int n){
	for (int i=0; i<n;i++){
		if (array[i]==x)
			return i;
	}
	return -1;
}

string convertNum(string temp)
{
	
	string answer = "";
		for(int i = 0; i < temp.length(); i++)
		{
			if (temp[i] >= 'A' && temp[i] <= 'Z'){ //LETTERS :)
				answer += conversion(temp[i]);
			}
			else if(temp[i] >= '0' && temp[i] <= '9') {
				answer += temp[i];
			}
		}
		answer.insert(3,"-");
		return answer;
}

char conversion(char letter)
{
	char temp;
	switch (letter)
	{
		case 'A': 
			temp = '2';
			break;
		case 'B':
			temp = '2';
			break;
		case 'C':
			temp = '2';
				break;
		case 'D':
			temp = '3';
			break;
		case 'E':
			temp = '3';
			break;
		case 'F': 
			temp = '3';
			break;
		case 'G':
			temp = '4';
			break;
		case 'H':
			temp = '4';
			break;
		case 'I':
			temp = '4';
			break;
		case 'J':
			temp = '5';
			break;
		case 'K': 
			temp = '5';
			break;
		case 'L':
			temp = '5';
			break;
		case 'M':
			temp = '6';
			break;
		case 'N':
			temp = '6';
			break;
		case 'O':
			temp = '6';
			break;
		case 'P': 
			temp = '7';
			break;
		case 'R':
			temp = '7';
			break;
		case 'S':
			temp = '7';
			break;
		case 'T':
			temp = '8';
			break;
		case 'U': 
			temp = '8';
			break;
		case 'V':
			temp = '8';
			break;
		case 'W':
			temp = '9';
			break;
		case 'X':
			temp = '9';
			break;
		case 'Y':
			temp = '9';
			break;
		
	}
	return temp;
}

