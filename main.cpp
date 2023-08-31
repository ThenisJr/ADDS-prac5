#include "BubbleSort.h"
#include <vector>
#include <iostream>

int main() {
    BubbleSort bub;
    std::vector<int> vec = {1, 3, 5, 4, -5, 100, 7777, 2014};
    std::vector<int> sorted = bub.sort(vec);
    for(int i = 0;i<sorted.size();i++){
        std::cout<<sorted.at(i)<<std::endl;
    }

    return 1;
}