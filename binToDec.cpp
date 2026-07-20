#include<iostream>
using namespace std;

int binToDec(int BinNum){   
    int ans = 0;
    int pow = 1;

        while(BinNum > 0){
           int rem = BinNum % 10;
           ans += (rem*pow);

           BinNum = BinNum/10;
           pow = pow*2;

         
           
        }
          return ans;
}

int main(){
    cout <<"decimal value of : " << binToDec(10100) << endl;
   
}