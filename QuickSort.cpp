#include "QuickSort.h"
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list){
    if(list.size()<2){
        return list;
    }
    if(list.size()==2){
        if(list.at(1)<list.at(0)){
            int placeholder = list.at(1);
            list.at(1)=list.at(0);
            list.at(0)=placeholder; 
        }
        return list;
    }
    
        int pivot = list.at(2);
        list.at(2)=list.at(list.size()-1);
        list.at(list.size()-1)=pivot;
        int pivotindex = 0;

        for(int i=0; i< list.size();i++){
            if(list.at(i)< pivot){
                int placeholder = list.at(i);
                list.at(i)=list.at(pivotindex);
                list.at(pivotindex)=placeholder;
                pivotindex++;

            }

        }
        list.at(list.size()-1)=list.at(pivotindex);
        list.at(pivotindex)=pivot;

        std::vector<int> out1(list.begin(), list.begin()+(pivotindex));
        std::vector<int> out2(list.begin()+(pivotindex+1),list.begin()+(list.size()));
        std::vector<int> output = sort(out1);
        std::vector<int> sortout2 = sort(out2);
        output.push_back(list.at(pivotindex));
        output.insert(output.end(),sortout2.begin(),sortout2.end());
        return output;
    
}