#include<iostream>
#include<climits>

using namespace std;

int main(){
    int nums[] = { 1,2,4,6,8,999,0,3,5,3,4,-2};
    int size = 12;

    int smallest = INT_MAX;

    for(int i = 0; i < 12; i++){
        smallest = min(nums[i], smallest);
    }
    cout << smallest << endl;
    return 0;
}