#include<stdio.h>
int main(){
    int a=5,b=3,c=1;
    int result=a*(b+c++)/(--b);
    printf("%d\n",result);
    return 0;

}