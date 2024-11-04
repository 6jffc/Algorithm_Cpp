/*Bài 9. Vi?t ch??ng  trình  tìm các nghi?m nguyên d??ng c?a h? ph??ng trình:
X + Y + Z = 100
5X + 3Y + Z/3 = 100
*/
#include<iostream>
using namespace std;
int main(){
	const int sum = 100;
	int count = 0;
	for (int X = 1; X <= sum; ++X)
	{
		for(int Y = 1; Y <= sum; ++Y)
		{
			for(int Z = 1; Z <= sum; ++Z)
			{
				if(X+Y+Z == sum && 5*X + 3*Y + Z/3 == sum)
				{
					cout<<"nghien thu "<<count++<<"X="<<X<<"Y="<<Y<<"Z="<<Z;
				}
			}
		}
	}
	return 0;
}
