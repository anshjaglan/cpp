#include <iostream>
using namespace std;

int main(){
    int i;
    int j;

    for(int i = 1; i <= 4; i++){
        for (int j = i+1; j <= 4; j++){
            cout <<'*';

        }
        cout <<endl;
    }
    return 0;
}