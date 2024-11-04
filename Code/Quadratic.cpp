#include<iostream>
#include<cmath>
using namespace std;

void quadratic(int a, int b, int c, double& root1, double& root2){
  double d = sqrt(b*b - 4*a*c);
  root1 = (-b + d)/(2*a);
  root2 = (-b - d)/(2*a);	
}
int main()
{
	int a, b, c;
	double root1, root2;
	cout<<" a = \n";
	cin>>a;
	
	cout<<" b = \n";
	cin>>b;
	
	cout<<" c = \n";
	cin>>c;
	
	quadratic(a, b, c, root1, root2);
	
	cout<<"The roots are "<<root1<<" and "<<root2<<endl;
	
}
