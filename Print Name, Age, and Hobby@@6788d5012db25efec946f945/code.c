#include<stdio.h>
int main(){
    char str1[34];
    int age;
    char str2[23];
    scanf("%s, %d, %s", &str1, age, &str2);
    printf("Name: %s\n", str1);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", str2);
    return 0;
}