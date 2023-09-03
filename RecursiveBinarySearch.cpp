#include "RecursiveBinarySearch.h"
#include <iostream>

bool RecursiveBinarySearch::search(std::vector<int> list, int to_find){
    return search(list, 0, list.size()-1, to_find);
}

bool RecursiveBinarySearch::search(std::vector<int> list, int beginning, int end, int to_find){
    if(beginning>end){
        return false;
    }
    int middle = (beginning+end)/2;
    //std::cout<<"beginning: "<<beginning<<std::endl;
    //std::cout<<"end: "<<end<<std::endl;
    //std::cout<<"Middle: "<<middle<<std::endl;
    //found
    if(to_find==list[middle]){
        return true;
    }else if(to_find<list[middle]){
        return search(list, beginning, middle-1, to_find);
    }else if(to_find>list[middle]){
        return search(list, middle+1, end, to_find);
    }
    return false;
}