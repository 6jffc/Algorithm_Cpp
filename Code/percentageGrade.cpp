#include<iostream>
using namespace std;

int  percentageGrade(int percent){
	if(percent >= 90){
		cout<<"You got an A!"<<endl; 
	} 
	else if(percent >= 80){
		cout<<"You got an B!"<<endl;
	} 
	else if(percent >= 70){
		cout<<"You got an C!"<<endl;
	} 
	else if(percent >= 60){
		cout<<"You got an D!"<<endl;
	} 
	else{
		cout<<"You got an F!"<<endl;
	} 
}

int main(){
	int percent;
	 cout << "What percentage did you earn? ";
	 cin>> percent;
	 percentageGrade(percent);
	 
	return 0; 
} 
