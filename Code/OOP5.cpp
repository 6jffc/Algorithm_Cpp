/*#include<iostream>
#include<string>
using namespace std;
class OTO{
	char* hangsx;
	int namsx;
	float dongiatt;
public:
OTO(char* h = "", int = 0, float = 0.0);
char* gethangsx();
int getnamsx();
float getdongiatt();

void sethangsx(char*);
void setnamsx(int);
void setdongiatt(float);

friend istream& operator>>(istream&, OTO&);
friend ostream& operator<<(ostream&, OTO&);
}; 
class XEKHACH:public OTO{
	int soghe;
public:
XEKHACH(char* h = "", int  = 0, float  = 0.0, int  = 0);
int operator>(XEKHACH);
int giasauthue();
friend istream& operator>>(istream&, XEKHACH&);
friend istream& operator<<(istream&, XEKHACH&);
}; 
OTO::OTO(char* h, int nsx, float dg){
	strcpy(hangsx,h);
	namsx = nsx;
	dongiatt = dg; 
} 
char* OTO::gethangsx(){
	return hangsx; 
} 
int OTO::getnamsx(){
	return namsx; 
} 
float OTO::getdongiatt(){
	return dongiatt; 
} 
void OTO::hangsx(char*){
	strcpy(hangsx, h);
} 
void OTO::setnamsx(int){
	namsx = nsx; 
}  
void OTO::setdongiatt(float){
 dongiatt = dg;	
} 
XEKHACH::XEKHACH(char* h, int nsx, float dg, int sg):OTO(h, nsx, dg){
	soghe = sg; 
} 
int XEKHACH::operator>(XEKHACH a){
return soghe>a.soghe ? 1:0;}
float XEKHACH::giasauthue()
{
	float x, p;
	x = dongia();
	if(soghe>29)
	p = 0.2;
	else if(soghe >= 17)
	p = 0.15;
	else if(soghe>= 10)
	p = 0.1;
	else 
	p = 0.08;
	return x+x*p; 
 } 
istream &operator>>(istream&INPUT, OTO&P){
cout<<"Hang sx: ";
fflush(stdin);
gets(P.hangsx);
cout<<"Nam sx: ";
INPUT>>P.namsx;
cout<<"Don gia truoc thue: ";
INPUT>>P.dongiatt;
return INPUT; 
}
ostream &operator<<(ostream&OUT, OTO&P){
OUT<<endl<<"Hang sx: "<<P.hangsx<<", Nam sx: "<<P.namsx<<", Don gia truoc thue: "<<P.dongiatt;
return OUT; 
} 
istream &operator>>(istream&INPUT, XEKHACH&P){
OTO Q;
INPUT>>Q;
P.sethangsx(Q.sethangsx());
P.setnamsx(Q.setnamsx());
P.setdongiatt(Q.setdongiatt());
cout<<"So ghe";
INPUT>>P.soghe;
return INPUT; 
}
ostream &operator<<(ostream&OUT, XEKHACH&P){
OTO Q; 
Q = P;
OUT<<Q<<", So ghe: "<<P.soghe;
return OUT; 
}
int main(){
int m, n, i, k;
OTO x[20];
XEKHACH y[20];
cout<<"Nhap so luong oto m = ";
cin>>m;
cout<<"Nhap thong tin cac oto"<<endl; 
for(int i = 1; i<= m;i++){
	cout<<"O to thu "<<i<<":";
	cin>>x[i]; 
} 
for(int i = 1; i < m; i++)
 for(int k = i + 1; k <= m; i++)
 	if(x[i].setnamsx()>x[k].setnamsx()){
 		OTO a = x[i];
		 x[i] = x[k];
		 x[k] = a; 
	 } 
	 cout<<"Danh sach OTO tang theo nam san xuat: "<<endl; 
	 for(int i = 1; i <= m; i++){
	 	cout<<"O to thu "<<i<<":";
	    cin>>x[i]; 
	 } 
	 cout<<endl<<"Nhap so luong xe khach n = ";
	 cin>>n;
	 cout<<"Nhap thong tin cac xe khach"<<endl;
	 for(int i = 1; i <+ n; i++){
	 	cout<<"Xe khach thu "<<i<<":";
		 cin>>y[i]; 
	 } 
	 for(int i = 1; i<n; i++)
	  for(int k = i + 1; k <= n; k++)
	   if(y[i]>y[k]){
	   	XEKHACH a = y[i];
		y[i] = y[k];
		y[k] = a; 
	   } 
	cout<<endl<<"Danh sach cac xe khach tang theo so ghe: "<<endl;
	for(int i = 1; i <= n; i++)
	 cout<<y[i]<<"Gia sau thue: "<<y[i].giasauthue();
	 return 0; 
} */
#include <iostream>
#include <string>
using namespace std;

class OTO {
    char* hangsx;
    int namsx;
    float dongiatt;

public:
    OTO(char* h = "", int nsx = 0, float dg = 0.0);
    char* gethangsx();
    int getnamsx();
    float getdongiatt();

    void sethangsx(char*);
    void setnamsx(int);
    void setdongiatt(float);

    friend istream& operator>>(istream&, OTO&);
    friend ostream& operator<<(ostream&, OTO&);
};

class XEKHACH : public OTO {
    int soghe;

public:
    XEKHACH(char* h = "", int nsx = 0, float dg = 0.0, int sg = 0);
    int operator>(XEKHACH);
    float giasauthue();

    friend istream& operator>>(istream&, XEKHACH&);
    friend ostream& operator<<(ostream&, XEKHACH&);
};

OTO::OTO(char* h, int nsx, float dg) : hangsx(new char[strlen(h) + 1]), namsx(nsx), dongiatt(dg) {
    strcpy(hangsx, h);
}

char* OTO::gethangsx() {
    return hangsx;
}

int OTO::getnamsx() {
    return namsx;
}

float OTO::getdongiatt() {
    return dongiatt;
}

void OTO::sethangsx(char* h) {
    if (hangsx)
        delete[] hangsx;
    hangsx = new char[strlen(h) + 1];
    strcpy(hangsx, h);
}

void OTO::setnamsx(int nsx) {
    namsx = nsx;
}

void OTO::setdongiatt(float dg) {
    dongiatt = dg;
}

XEKHACH::XEKHACH(char* h, int nsx, float dg, int sg) : OTO(h, nsx, dg), soghe(sg) {}

int XEKHACH::operator>(XEKHACH a) {
    return soghe > a.soghe ? 1 : 0;
}

float XEKHACH::giasauthue() {
    float x, p;
    x = getdongiatt(); // G?i hàm getter thay v? dùng tr?c ti?p thu?c tính
    if (soghe > 29)
        p = 0.2;
    else if (soghe >= 17)
        p = 0.15;
    else if (soghe >= 10)
        p = 0.1;
    else
        p = 0.08;
    return x + x * p;
}

istream& operator>>(istream& INPUT, OTO& P) {
    cout << "Hang sx: ";
    char temp[100];
    INPUT.getline(temp, 100);
    P.sethangsx(temp); // S? d?ng hàm setter
    cout << "Nam sx: ";
    INPUT >> P.namsx;
    cout << "Don gia truoc thue: ";
    INPUT >> P.dongiatt;
    return INPUT;
}

ostream& operator<<(ostream& OUT, OTO& P) {
    OUT << endl << "Hang sx: " << P.gethangsx() << ", Nam sx: " << P.getnamsx() << ", Don gia truoc thue: " << P.getdongiatt();
    return OUT;
}

istream& operator>>(istream& INPUT, XEKHACH& P) {
    OTO Q;
    INPUT >> Q;
    P.sethangsx(Q.gethangsx());
    P.setnamsx(Q.getnamsx());
    P.setdongiatt(Q.getdongiatt());
    cout << "So ghe: ";
    INPUT >> P.soghe;
    return INPUT;
}

ostream& operator<<(ostream& OUT, XEKHACH& P) {
    OTO Q;
    Q = P;
    OUT << Q << ", So ghe: " << P.soghe;
    return OUT;
}

int main() {
    int m, n, i, k;
    OTO x[20];
    XEKHACH y[20];
    cout << "Nhap so luong oto m = ";
    cin >> m;
    cout << "Nhap thong tin cac oto" << endl;
    for (int i = 0; i < m; i++) { // S?a v?ng l?p b?t ð?u t? 0
        cout << "O to thu " << i + 1 << ":";
        cin >> x[i];
    }
    for (int i = 0; i < m - 1; i++) // S?a ði?u ki?n c?a v?ng l?p
        for (int k = i + 1; k < m; k++) { // S?a v?ng l?p b?t ð?u t? i + 1
            if (x[i].getnamsx() > x[k].getnamsx()) {
                OTO a = x[i];
                x[i] = x[k];
                x[k] = a;
            }
        }
    cout << "Danh sach OTO tang theo nam san xuat: " << endl;
    for (int i = 0; i < m; i++) { // S?a v?ng l?p b?t ð?u t? 0
        cout << "O to thu " << i + 1 << ":";
        cout << x[i];
    }
    cout << endl << "Nhap so luong xe khach n = ";
    cin >> n;
    cout << "Nhap thong tin cac xe khach" << endl;
    for (int i = 0; i < n; i++) { // S?a v?ng l?p b?t ð?u t? 0
        cout << "Xe khach thu " << i + 1 << ":";
        cin >> y[i];
    }
    for (int i = 0; i < n - 1; i++) // S?a ði?u ki?n c?a v?ng l?p
        for (int k = i + 1; k < n; k++) { // S?a v?ng l?p b?t ð?u t? i + 1
            if (y[i] > y[k]) {
                XEKHACH a = y[i];
                y[i] = y[k];
                y[k] = a;
            }
        }
    cout << endl << "Danh sach cac xe khach tang theo so ghe: " << endl;
    for (int i = 0; i < n; i++) // S?a v?ng l?p b?t ð?u t? 0
        cout << "Xe khach thu " << i + 1 << ": " << y[i] << ", Gia sau thue: " << y[i].giasauthue() << endl;
    return 0;
}

