#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&b,&c);
    a = b;
    b = c;
    c = a;
    printf("%d %d",b,c);
    return 0;
}