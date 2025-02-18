#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num % 2==0){
        printf("Even %d",num);
    }
    else{
        printf("Odd %d",num);
    }
    return 0;
}