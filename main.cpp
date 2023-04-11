#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;
int main(){
    QuickSort s;
    vector<int> input;
    int num;
    

    while((cin>>num)){
        
       input.push_back(num);

       if(cin.peek()=='\n'){
        break;
       }
    }
       //{ 1, 3, 5, 4, -5, 100, 7777, 2014 };
   
    vector<int> sorted = s.sort(input);
    RecursiveBinarySearch b;
    string out;
    if(b.search(sorted, 1)==1){
        out = "true";
    }
    else{
        out = "false";
    }
   
    cout<<" "<<out;

    for(int i=0; i<sorted.size();i++){
        cout<<" "<<sorted.at(i);
    }
    cout<<endl;

}