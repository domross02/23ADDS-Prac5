#include "RecursiveBinarySearch.h"
using namespace std;
bool RecursiveBinarySearch::search(vector<int> list, int item){
    int start, end;
    start=0;
    end=list.size()-1;
    
    int index = search(list, item, start, end);
    if(index == -1){
        return false;
    }
    else{
        return true;
        }
}
int RecursiveBinarySearch::search(vector<int> list, int item, int start, int end){
 
    int midpoint = (start+end)/2;
    if((start+end)%2!=0){
        if(list.at(midpoint+1)==item){ 
        return midpoint+1;
    }
    }
    if(list.size()<1||start>=end){
        return -1;
    }
    if(list.at(midpoint)==item){ 
        return midpoint;
    }

    if(item<list.at(midpoint)){
        return search(list, item, start, midpoint);
    }
    
        return search(list,item, midpoint, end);
    
    
    
}