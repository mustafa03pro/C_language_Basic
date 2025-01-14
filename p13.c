#include<stdio.h>
int main(){
    int x=5;
    int y=3;
    x+=y++;
    y-=x--;
    printf("%d%d",x,y);
    return 0;
}