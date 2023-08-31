#include "BubbleSort.h"
#include <vector>
#include <iostream>

int main() {
    BubbleSort bub;
    std::vector<int> vec = {10, 30, 20, 5, 6, 4};
    std::vector<int> sorted = bub.sort(vec);
    for(int i = 0;i<sorted.size();i++){
        std::cout<<sorted.at(i)<<std::endl;
    }

    return 1;
}