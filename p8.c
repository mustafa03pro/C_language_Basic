#include<stdio.h>
int main(){
    int a=8;
    int b=4;
    a+=b%a;
    printf("%d",a);
    return 0;
}
//9