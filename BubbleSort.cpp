#include "BubbleSort.h"
#include <string>
#include<iostream>

std::vector<int> BubbleSort::sort(std::vector<int> &list){
    //std::cout<<list.size()<<std::endl;
    //loop for the size of list
    for(int i = list.size()-1;i>0;i--){
        for(int j = 0; j<i; j++){
            //j is bigger then j+1, then just J into j+1 and j+1 into j
            if(list[j]>list[j+1]){
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    return list;
}