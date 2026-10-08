#include <iostream>
#include <string>
#include <windows.h>

void swap(int* a, int* b);

const int max{ 10 };
int mass[max];
int reverse_mass[max];

void reverse(int* mass, const int count, int* reverse_mass);

int main(int argc, char** argv)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);


	std::cout << "До функции reverse: ";
	for (int i = 0; i < max; i++)
	{
		mass[i] = i;
		std::cout << mass[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "После функции reverse: ";
	reverse(mass, max, reverse_mass);
	for (int i = 0; i < max; i++)
	{
		std::cout << reverse_mass[i] << " ";
	}


	return 0;
}



void reverse(int* mass, const int count, int* reverse_mass)
{

	for (int i = count; i > 0; i--)
	{
		*(reverse_mass + count - i) = *(mass + i - 1);
	}
}