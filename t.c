#include<stdio.h>

int* fun(){
    int x=1;
    int *y;
    y=&x;
    return y;
}
int main(){
    int* p=fun();
    printf("%d",*p);
}