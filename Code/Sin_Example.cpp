/*sin example */
#include<iostream>
#include<math.h>
using namespace std; 

#define PI 3.14159265

int main(){
	 double param, result;
	 param = 30.0;
	 result = sin(param*PI/180);
	 cout<<"The sine of "<<param<<" degrees "<<result;
	 return 0; 
} 
