#pragma once
#include "Problems.h"
// C
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// C++
#include <iostream>
#include <iomanip>

class Week1 :
    public Problems
{
private:
    Problems myObj;

public:
    void plusMinus(uint8_t arr_count, int8_t* arr);
    void runPlusMinus(void);
};

