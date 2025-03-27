#include<stdio.h>
int manin(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (b%a==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}