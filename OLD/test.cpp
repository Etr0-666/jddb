#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int a=1;
    int c=2;
    int& b=c;
    swap(a,b);
    cout << a << endl << b << endl;
    return 0;
}