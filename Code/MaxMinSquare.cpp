#include<iostream>
using namespace std;

void MaxMin(int max, int min){
	for(int i = 0; i <= max - min; i++){
		for(int j = 0; j <= max - min; i++){
			int num = min + (i + j) % (max - min + 1);
			cout<<num;
		}
		cout<<endl;
	}
}
int main(){
	int max, min;
	cout<<"Hay nhap so max = ";
	cin>>max;
	
	cout<<"Hay nhap so min = ";
	cin>>min;
	
	MaxMin(max, min);
	return 0;
} 
