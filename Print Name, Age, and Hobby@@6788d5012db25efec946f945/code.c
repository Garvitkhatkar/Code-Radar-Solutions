#include<stdio.h>
int main(){
    char str1[50];
    int n;
    char str2[50];
    scanf("%s, %d, %s", &str1, n, &str2);
    printf("Name: %s\n", str1);
    printf("Age: %d\n", n);
    printf("Hobby: %s\n", str2);
    return 0;
}