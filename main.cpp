#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

int main() {
    BubbleSort bub;
    //QuickSort quip;
    RecursiveBinarySearch search;
    std::string values;
    std::vector<int> numbers;
    std::getline(std::cin, values); // Read the entire line of input
    //std::cout<<values<<std::endl;
    std::istringstream iss(values);
    int number;
    while (iss >> number) {
        numbers.push_back(number); // Add the extracted integer to the vector
    }

    // Display the vector of integers
    /*std::cout << "Vector of integers:" << std::endl;
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;*/
    std::vector<int> sorted = bub.sort(numbers);
    bool searched = search.search(numbers, 1);
    std::cout<<std::boolalpha<<searched<< " ";
    for (int i = 0; i < sorted.size(); i++) {
        std::cout << numbers[i] << " ";
    }


    return 1;
}