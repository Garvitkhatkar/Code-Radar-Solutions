#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((b+c>a) && (c+a>b) && (a+b>c)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}