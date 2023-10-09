#include <iostream>

int main() 
{
	std::cout << "Ten = ";
	char name[31] {};
	std::cin.getline(name, 30);
	std::cout << "Nam sinh = ";
	int year {};
	std::cin >> year;
	std::cout << "Chao ban " << name << " nam nay ban " << 2023 - year << " tuoi.";
	return 0;
}