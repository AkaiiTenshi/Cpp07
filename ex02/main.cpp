#include <iostream>
#include <string>
#include "Array.hpp"

int main() {
    // 1. Test empty array
    Array<int> empty;
    std::cout << "Empty size: " << empty.size() << std::endl;

    // 2. Test int array with default initialization
    Array<int> numbers(5);
    std::cout << "Numbers[0] (should be 0): " << numbers[0] << std::endl;
    
    // 3. Modifying values
    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    // 4. Test Deep Copy
    Array<int> copy = numbers;
    std::cout << "Original[0]: " << numbers[0] << " (remains 0)" << std::endl;
    std::cout << "Copy[0]: " << copy[0] << " (should be 0)" << std::endl;
    copy[0] = 42;
	std::cout << "Copy[0]: " << copy[0] << " (changed to 42)" << std::endl;

    // 5. Test Exception
    try {
        std::cout << numbers[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught Error: " << e.what() << std::endl;
    }

    return 0;
}
