#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num % 2==0){
        printf("Even %d");
    }
    else{
        printf("Odd %d");
    }
    return 0;
}