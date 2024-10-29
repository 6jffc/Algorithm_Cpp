#include<iostream>
#include<cmath>

using namespace std;

int minimalJumps(int x){ //hHàm tính s? l?n nh?y t?i thi?u c?n thi?t ð? ð?t ð?n ði?m \( x \)
	x = abs(x); // abs la gia tri doi
	int num = 0;
	int sum = 0;
	while(sum < x || (sum - x) % 2 != 0){
		num++;
		sum += num; 
	} 
	return num; 
} 
int main(){
	int x;
	cin>>x;
	
	int result =  minimalJumps(x);
	cout<<result<<endl;
	
	return 0; 
} 
