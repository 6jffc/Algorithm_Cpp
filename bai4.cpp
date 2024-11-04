/*Bài 4: Nh?p h? tên, tách h? tên ra làm 2 ph?n h? và tên riêng*/
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
 
