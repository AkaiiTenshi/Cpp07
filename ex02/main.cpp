#include <iostream>
#include <string>
#include "Array.hpp"
#include <cstdlib>

// int main() {
//     // 1. Test empty array
//     Array<int> empty;
//     std::cout << "Empty size: " << empty.size() << std::endl;
//
//     // 2. Test int array with default initialization
//     Array<int> numbers(5);
//     std::cout << "Numbers[0] (should be 0): " << numbers[0] << std::endl;
//
//     // 3. Modifying values
//     for (unsigned int i = 0; i < numbers.size(); i++)
//         numbers[i] = i * 10;
//
//     // 4. Test Deep Copy
//     Array<int> copy = numbers;
//     std::cout << "Original[0]: " << numbers[0] << " (remains 0)" << std::endl;
//     std::cout << "Copy[0]: " << copy[0] << " (should be 0)" << std::endl;
//     copy[0] = 42;
// 	std::cout << "Copy[0]: " << copy[0] << " (changed to 42)" << std::endl;
//
//     // 5. Test Exception
//     try {
//         std::cout << numbers[10] << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "Caught Error: " << e.what() << std::endl;
//     }
//
//     return 0;
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

