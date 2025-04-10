#include <stdio.h>
int main(){
    char a;
    sacnf("%c",&a);
    if (a =='R'){
        printf("Stop");
    }
    else if(a == 'G'){
        printf("Go");
    }
    else if(a == 'Y'){
        printf("Slow Down");
    }
    else{
        printf("Invaid input");
    }
}