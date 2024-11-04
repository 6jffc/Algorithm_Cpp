#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream input;
	input.open("chaocau.text"); 
	string line;
	while (getline (input, line)){
		cout<<"Here is a line: "<<line<<endl; 
	} 
	return 0; 
} 
