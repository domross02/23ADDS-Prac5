#include <vector>
#include <iostream>
#include "Sort.h"
#include "QuickSort.h"
using namespace std;
int main(){

    vector<int> input{ 0, 3, 5, 4, -5, 100, 7777, 2014 };
    QuickSort s;
    vector<int> test=s.sort(input);
    //test = input(0, 2);
   for(int i=0; i<test.size();i++){
        std::cout<<test.at(i)<<std::endl;
    }
    cout<<test.size()<<endl;
}