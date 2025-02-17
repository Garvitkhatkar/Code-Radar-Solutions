#include<stdio.h>
int main(){
    char str1[34] ;
    int age ;
    char str2[23] ;
    scanf("%s"&str1);
    scanf("%d",&age);
    scanf("%s",&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str1 , age, str2);

    return 0;
}