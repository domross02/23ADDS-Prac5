#include <vector>
#include <iostream>
using namespace std;
int main(){

    vector<int> input{ 1, 3, 5, 4, -5, 100, 7777, 2014 };
    vector<int> test(input.begin(), input.begin()+2);
    //test = input(0, 2);
   for(int i=0; i<test.size();i++){
        std::cout<<test.at(i)<<std::endl;
    }

}