#include<iostream>
using namespace std;

int main(){
    char ch;
    cout <<"Enter Char: \n";
    cin >> ch;

    if(ch >= 65 && ch <= 90){
        cout <<"Char is in UPPERCASE" << endl;
    } else {
        cout << "Char is in lowercase" << endl;
    }
    return 0;
}