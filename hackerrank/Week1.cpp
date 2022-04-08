#include "Week1.h"

// Test input for week 1 problem 1
void Week1::runPlusMinus(void)
{
	const uint32_t WAITMS = 2000;

	const uint8_t SIZE1 = 6;
	int8_t testInput1[SIZE1] = { -4, 3, -9, 0, 4, 1 };
	printArray(testInput1, SIZE1);
	plusMinus(SIZE1, testInput1);

	myObj.delay(WAITMS);

	const uint8_t SIZE2 = 8;
	int8_t testInput2[8] = { -127, 3, -9, 0, 4, 1, -100, 127 };
	printArray(testInput2, SIZE2);
	plusMinus(SIZE2, testInput2);

	myObj.delay(WAITMS);

	const uint8_t SIZE3 = 14;
	int8_t testInput3[6] = { -0x10, 0x30, -0xF1, 0, 0xA5, 0 };
	printArray(testInput3, SIZE3);
	plusMinus(SIZE3, testInput3);

	myObj.delay(WAITMS);

	const uint8_t SIZE4 = 3;
	int8_t testInput4[6] = { -0x1, 0x0, 0x2};
	printArray(testInput4, SIZE4);
	plusMinus(SIZE4, testInput4);

	myObj.delay(WAITMS);
}

// Week 1 problem 1
void Week1::plusMinus(uint8_t arr_count, int8_t* arr) 
{
	float c0 = 0, c1 = 0, c2 = 0;
	for (int i = 0; i < arr_count; i++)
	{
		if (arr[i] < 0)
		{
			c0++;
		}
		else if (arr[i] == 0)
		{
			c1++;
		}
		else if (arr[i] > 0)
		{
			c2++;
		}
	}
	printf("%06f\n", c2 / arr_count);
	printf("%06f\n", c0 / arr_count);
	printf("%06f\n", c1 / arr_count);

	// For C++
	//std::cout << std::fixed << std::setfill('0') << std::setprecision(6) << c2/arr_count << std::endl;
	//std::cout << std::fixed << std::setfill('0') << std::setprecision(6) << c0/arr_count << std::endl;
	//std::cout << std::fixed << std::setfill('0') << std::setprecision(6) << c1/arr_count << std::endl;
}

