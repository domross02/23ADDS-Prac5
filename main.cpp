#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;
int main(){
    
   vector<int> input; //{ 0, 3, 5, 4, -5, 100, 7777, 2014 };
    QuickSort s;
    
    
   
    int num;
    while((cin>>num)){
        
       input.push_back(num);

       if(cin.peek()=='\n'){
        break;
       }
    }
    vector<int> sorted=s.sort(input);
   
    
    RecursiveBinarySearch b;
   
    string out;
    bool result = b.search(sorted,1);
    if(result==1){
        out = "true";
    }
    else{
        out = "false";
    }
    cout<<out;
   for(int i=0; i<sorted.size();i++){
        std::cout<<" "<<sorted.at(i);
    }
    cout<<endl;
  

}