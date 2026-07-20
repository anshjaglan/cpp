#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    

    int oddSum = 0;
    cout <<" Enter no. : ";
    cin >> n;

    while(i <= n){
        oddSum += i;
      i = i+2;
    }
          
    cout <<"odd sum is : " << oddSum << endl;
    return 0;
}