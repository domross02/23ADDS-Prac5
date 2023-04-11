#include "BubbleSort.h"
#include <vector>
std::vector<int> BubbleSort::sort(std::vector<int> list){

    for(int j = list.size()-1; j>0 ;j--){
        for(int i=0;i<j;i++){
            if(list.at(i)>list.at(i+1)){
                int placeholder = list.at(i+1);
                list.at(i+1)=list.at(i);
                list.at(i)=placeholder;
            }
            
        }
    }
    return list;
}