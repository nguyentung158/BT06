#include<iostream>
using namespace  std;

long F(int n) {
    int tong =0;
    int  t0 =0;
    int t1 = 1;
    if(n == 0) return 0;
    else if(n == 1) return 1;
   else {
       for(int i =2; i<= n;i++ ){
        tong = t0+t1;
        t0 =t1;
        t1= tong;
       }
   }
   return tong;
}


int main(){
    int n;
    cin >> n;
    cout << F(n);


}

