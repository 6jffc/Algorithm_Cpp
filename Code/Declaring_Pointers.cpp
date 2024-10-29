#include<iostream>
using namespace std;

int main(){
    int firstvalue, secondvalues;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer =   10;
    mypointer = &secondvalues;
    *mypointer = 20;
    cout<<mypointer<<" "<<&firstvalue<<" "<<firstvalue<<" "<<&secondvalues<<" "<<secondvalues;
    return 0;
}