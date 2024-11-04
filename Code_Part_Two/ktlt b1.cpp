#include<iostream>
#include<fstream>
#include<string>
using namespace std;
string chuyencoso(int n, int b)
{
	string kq = "";
	while (n > 0)
	{  
		if (n%b < 10)
		{
			kq = char ('0' + n % b ) + kq;
        	
		}
        else
        {
        	kq = char ('A' + n % b - 10) + kq;
        	
		}
		n = n / b;
    }
    return kq;
}
int main()
{
   	ifstream fp1;// khai bao bien file de doc
    fp1.open("chaocau.txt");//Mo file de doc
    ofstream fp2("output.txt");// khai bao bien file de doc
    if(!fp1) {
   		cout <<"false";
   		return 0;
	   }

	
	int a;
	fp1 >> a;
	for(int i = 0; i < a; i++){
		int  n, b;
		fp1 >> n >> b;//ghi noi dung cua bien n, b vao file
		fp2 << n <<"	"<< b <<"	"<< chuyencoso(n, b) << endl;
	}
    fp1.close();
    fp2.close();
}
