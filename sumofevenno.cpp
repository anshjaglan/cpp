#include<iostream>
using namespace std;
int main(){
    int i = 2;
    int evensum = 0;
    int n;

    cout <<" Enter N : " << endl;
    cin >> n;

  while(i <= n){
    evensum += i;
    i = i+2;
  }
    cout << "sum of even no. " << evensum << endl;
    return 0;
}