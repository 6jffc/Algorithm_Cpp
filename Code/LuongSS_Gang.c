#include <window.h>
#include <stdio.h>

int x = 0;
int y = 1;
void T1(){
    while(1){
      x = y + 1;
      printf("%4d", x);
    }
}
void T2(){
    while(1){
      y = 2;
      y = y * 2;
    }
}
int main(){
HANDLE h1, h2;
h1 = CreateWindow();
h2 = CreateWindow();
WaitForSingleObject(h1, INFINITE);
WaitForSingleObject(h2, INFINITE);
return 0;
}