/*B�i 4: Nh?p h? t�n, t�ch h? t�n ra l�m 2 ph?n h? v� t�n ri�ng*/
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string hoten;
    std::cout <<" Hay nhap ho ten cua ban vao day: ";
    std::getline(std::cin, hoten);

    std:: string ho, ten;

    std::stringstream ss(hoten);
    ss>>ho;
    std::getline(ss, ten);

    hoten = hoten.substr(ho.find(" "), ho.length());

    std::cout << ho << std::endl;
    std::cout << ten << std::endl;
}
 
