#include<iostream>

using namespace std;

void inmang(int a[]){
    cout << &a << endl;
    cout << &a[0] << endl;


}

int main()
{
    int a[10];
    inmang(a);
    cout << &a << endl;
    cout << &a[0] << endl;
}
