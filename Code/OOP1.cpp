/*#include <iostream>
#include <string>
using namespace std;

//Xay dung lop TAU
class TAU{
char* hangsx; 
int namsx;

public:
TAU(char*s = "", int = 1900);
char* gethangsx(); int getnamsx(); void sethangsx(char*); void setnamsx(int);
friend istream &operator>>(istream &, TAU&);  
friend ostream &operator<<(ostream &, TAU&);  
};

class TAUCHIEN:public TAU{
	char*loaitau;
	int trongtai;
	public:
	TAUCHIEN(char*s = "", int = 1900,char*lt ="", int = 1900 );
    int operator > (TAUCHIEN); 
    int tiensua();
    friend istream &operator>>(istream &, TAUCHIEN&);
    friend ostream &operator<<(ostream &, TAUCHIEN&);
};
TAU::TAU(char*s, int n){hangsx = new char[50]; strcpy(hangsx,s); namsx = n;}
char*TAU::gethangsx() {return hangsx;}
int TAU::getnamsx() {return namsx;}
void TAU::sethangsx(char*) {strcpy(hangsx, s);}
void TAU::setnamsx(int) {namsx = n;}
TAUCHIEN::TAUCHIEN(char*s, int n, char*lt, int t):TAU(s,n)
{loaitau = new char[50]; strcpy(loaitau, lt); trongtai = t;}
int TAUCHIEN::operator>(TAUCHIEN a) {return trongtai>a.trongtai ? 1:0; }
int TAUCHIEN:: tiensuachua();
{int n = namsx(); if(n < 1991) return 50; else if(n <= 2000) return 30; else return 10}
istream &operator>>(istream&INPUT, P&TAU);
{cout<<"Hang sx:"; fflush(stdin); gets(P.hangsx);
cout<<"Nam sx:"; Input>>P.namsx(); return INPUT;}
ostream &operator<<(ostream&OUT, P&TAU);
{OUT<<endl<<"Hang sx"<<P.hangsx<<", Nam sx"<<P.namsx; return OUT;}
istream &operator>>(istream&INPUT, P&TAUCHIEN);
TAU&Q = P; 
INPUT>>Q;
cout<<"Trong tai: "; fflush(stdin); gets(P.loaitau);
ostream &operator<<(ostream&OUT, P&TAUCHIEN);
{
TAU Q;
 Q = P;
 OUT<<Q<<", Loai tau"<<P.loaitau<<", trong tai"<<P.trongtai; return OUT;}
 int main(){
 	int m, n, i;
 	TAU x[20];
 	TAUCHIEN y[20];
 	cout<<"Nhap so luong tau m = ";
 	cin>>m;
 	cout<<"Nhap thong tin tau: "<<endl;
 	for(int i = 1; i<= m ; i++){
 		cout<<"Tau thu "<<i<<":";
 		cin>>x[i];
	 }
	 cout<<"Danh sach cac tau: "<<endl;
	 for(int i = 1; i <= m; i++){
	 	cout<<"\nTau thu "<<i<<":";
 		cin>>x[i];
	 }
	 cout<<"\nNhap so luong tau chien n=  ";
	 cin>>n;
	 for(int i = 1; i<= n ; i++){
 		cout<<"Tau thu chien "<<i<<":";
 		cin>>y[i];
	 }
	 for(int i = 1; i <n ; i++)
	  for(int k = i + 1; k <= n; k++)
	  if(x[i]>y[i]){
	  	TAUCHIEN a = y[i]; 
	  	y[i] = y[k];
	  	y[k] = a;
	  }
	  cout<<"Danh sach tau chien: "<<endl;
	  for(int i = 1; i <= n; i++){
	  	cout<<"\nTau chien thu "<<i<<":";
	  	cout<<y[i];
	  	cout<<", Tien sua chua"<<y[i].tiensua();
	  }
	  	  	return 0;
 }*/
 #include <iostream>
#include <string>
#include <cstring>
using namespace std;

class TAU {
    char* hangsx;
    int namsx;

public:
    TAU(char* s = "", int n = 1900);
    char* gethangsx();
    int getnamsx();
    void sethangsx(char*);
    void setnamsx(int);
    friend istream& operator>>(istream&, TAU&);
    friend ostream& operator<<(ostream&, TAU&);
};

class TAUCHIEN : public TAU {
    char* loaitau;
    int trongtai;

public:
    TAUCHIEN(char* s = "", int n = 1900, char* lt = "", int t = 0);
    int operator>(TAUCHIEN);
    int tiensuachua();
    friend istream& operator>>(istream&, TAUCHIEN&);
    friend ostream& operator<<(ostream&, TAUCHIEN&);
};

TAU::TAU(char* s, int n) {
    hangsx = new char[50];
    strcpy(hangsx, s);
    namsx = n;
}

char* TAU::gethangsx() {
    return hangsx;
}

int TAU::getnamsx() {
    return namsx;
}

void TAU::sethangsx(char* s) {
    strcpy(hangsx, s);
}

void TAU::setnamsx(int n) {
    namsx = n;
}

TAUCHIEN::TAUCHIEN(char* s, int n, char* lt, int t) : TAU(s, n) {
    loaitau = new char[50];
    strcpy(loaitau, lt);
    trongtai = t;
}

int TAUCHIEN::operator>(TAUCHIEN a) {
    return trongtai > a.trongtai ? 1 : 0;
}

int TAUCHIEN::tiensuachua() {
    int n = getnamsx();
    if (n < 1991) return 50;
    else if (n <= 2000) return 30;
    else return 10;
}

istream& operator>>(istream& INPUT, TAU& P) {
    cout << "Hang sx:";
    fflush(stdin);
    char temp[50];
    INPUT.getline(temp, 50);
    P.sethangsx(temp);
    cout << "Nam sx:";
    INPUT >> P.namsx;
    return INPUT;
}

ostream& operator<<(ostream& OUT, TAU& P) {
    OUT << endl << "Hang sx: " << P.gethangsx() << ", Nam sx: " << P.getnamsx();
    return OUT;
}

istream& operator>>(istream& INPUT, TAUCHIEN& P) {
    TAU& Q = P;
    INPUT >> Q;
    cout << "Loai tau: ";
    fflush(stdin);
    char temp[50];
    INPUT.getline(temp, 50);
    strcpy(P.loaitau, temp);
    cout << "Trong tai: ";
    INPUT >> P.trongtai;
    return INPUT;
}

ostream& operator<<(ostream& OUT, TAUCHIEN& P) {
    TAU Q = P;
    OUT << Q << ", Loai tau: " << P.loaitau << ", Trong tai: " << P.trongtai;
    return OUT;
}

int main() {
    int m, n;
    cout << "Nhap so luong tau m = ";
    cin >> m;
    TAU x[20];
    cout << "Nhap thong tin tau: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "Tau thu " << i + 1 << ": ";
        cin >> x[i];
    }
    cout << "Danh sach cac tau: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "\nTau thu " << i + 1 << ": " << x[i];
    }
    cout << "\nNhap so luong tau chien n = ";
    cin >> n;
    TAUCHIEN y[20];
    for (int i = 0; i < n; i++) {
        cout << "Tau chien thu " << i + 1 << ": ";
        cin >> y[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int k = i + 1; k < n; k++) {
            if (y[i] > y[k]) {
                TAUCHIEN a = y[i];
                y[i] = y[k];
                y[k] = a;
            }
        }
    }
    cout << "Danh sach tau chien: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nTau chien thu " << i + 1 << ": " << y[i] << ", Tien sua chua: " << y[i].tiensuachua();
    }
    return 0;
}

