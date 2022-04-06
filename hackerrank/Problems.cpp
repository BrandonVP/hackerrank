#include "Problems.h"

// C++
#include <iostream>
#include <iomanip>
#include <string>


void Problems::delay(uint32_t msTime)
{
	Sleep(msTime);
}

void Problems::printArray(int8_t* myArray, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << static_cast<int16_t>(myArray[i]) << " ";
	}
	std::cout << std::endl;
}

void Problems::printArray(uint8_t* myArray, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;
}

void Problems::printArray(int* myArray, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << myArray[i] << " ";
	}
	std::cout << std::endl;
}