#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf(a);
    }
    if (b>a && b>c){
        printf(b);
    }
    if (c>a && c>b){
        printf(c);
    }
        
    }
