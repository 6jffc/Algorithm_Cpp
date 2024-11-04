#include<iostream>
using namespace std;

int quadrant(double  x, double  y){
	if(x > 0 && y > 0){
		return 1; 
	} 
	else if(x < 0 && y >0){
		return 2; 
	} 
	else if(x < 0 && y < 0){
		return 3; 
	} 
	else{
		return 4; 
	} 
} 
int main(){
	double  x, y; 
	cout<<"X = ";
	cin>>x;
	
	cout<<"Y = ";
	cin>>y;
	
	int quadrantNumber = quadrant(x, y);
	cout<<"Quadrant"<<quadrantNumber<<endl; 
	return 0; 
} 
