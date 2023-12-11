#include <fstream>
#include <iostream>

int main(void) {
    char path1[101] {}, path2[101] {}, str[101] {};
    
    std::cout << "Nhap duong dan file 1: ";
    std::cin.getline(path1, 100);
    std::cout << "Nhap duong dan file 2: ";
    std::cin.getline(path2, 100);

    std::fstream stream;
    stream.open(path2, std::ios::in);
    stream.getline(str, 100);
    stream.close();
    
    stream.open(path1, std::ios::app);
    stream << str;
    stream.close();

    return 0;
}