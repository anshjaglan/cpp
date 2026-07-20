#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 2;

    bool isprime = true;
    cout << "enter no. : " << endl;
    cin >> n;

    for (int i = 2; i < n; i++){
        if (n%i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout <<"No. is prime " << endl;
    }
        else{
            cout << " No. is Not prime " << endl;

        }
    
    return 0;
}