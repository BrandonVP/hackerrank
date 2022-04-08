// hackerrank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Week1.h"
#include <iostream>
#include <vector>

Week1 weekOne;

using namespace std;

int main()
{
    //weekOne.runPlusMinus();
    uint64_t a = 0;
    vector<int> arr;
    arr.push_back(140638725);
    arr.push_back(362748590);
    arr.push_back(436257910);
    arr.push_back(734065819);
    arr.push_back(953274816);
    std::cout << a << std::endl;
    a += arr[1];
    std::cout << a << std::endl;
    a += arr[2];
    std::cout << a << std::endl;
    a += arr[3];
    std::cout << a << std::endl;
    a += arr[4 ];
    std::cout << a << std::endl;

    /*
    140638725
    362748590
    436257910
    734065819
    953274816
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
