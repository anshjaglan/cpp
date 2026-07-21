#include<iostream>
#include<climits>
using namespace std;


int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10,3,5,};
    int size = 12;

    int longest = INT_MIN;

    for(int i = 0; i < size; i++){
        longest = max(nums[i], longest);
    }
    cout << longest << endl;
    return 0;
}