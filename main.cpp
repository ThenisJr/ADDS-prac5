#include "BubbleSort.h"
#include "QuickSortL.h"
#include "QuickSort.h"
#include <vector>
#include <iostream>

int main() {
    BubbleSort bub;
    //QuickSortL qui;
    QuickSort quip;
    std::vector<int> vec = {5, 3, 20, 15, 4, 2, 200};
    std::vector<int> vec2 = {1, 0, 2, 1, 4, 5, 3, 3};
    std::vector<int> vec3 = {1, 0, 3, 1, 4, 5, 3, 2};
    std::vector<int> sorted = bub.sort(vec);
    std::cout<<"bubble: "<<std::endl;
    for(int i = 0;i<sorted.size();i++){
        std::cout<<sorted.at(i)<<std::endl;
    }
    /*std::vector<int> sorted2 = qui.sort(vec2);
    std::cout<<"quickL: "<<std::endl;
    for(int i = 0;i<sorted2.size();i++){
        std::cout<<sorted2.at(i)<<std::endl;
    }*/
    std::vector<int> sorted3 = quip.sort(vec3);
    std::cout<<"quick: "<<std::endl;
    for(int i = 0;i<sorted3.size();i++){
        std::cout<<sorted3.at(i)<<std::endl;
    }

    return 1;
}