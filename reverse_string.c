#include<stdio.h>

void reverse(char* s){
    if(*s != '\0'){
        reverse(s + 1);
        printf("%c", *s);
    }
}

int main(void){
    char s[] = "first";
    reverse(s);
    return 0;
}
