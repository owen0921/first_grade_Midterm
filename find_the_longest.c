#include<stdio.h>
#include<stdlib.h>
void identify_the_longest(char* s){
    char c = s[0]; // record who is the longest
    int len = strlen(s);
    int max_len = 0;
    int count = 0;

    for(int i = 0; i < len; i++){
        if(s[i] == s[i + 1]){
            count++;
            if(count > max_len){
                max_len = count;
                c = s[i];
            }
        }
        else{
            count = 0;
        }
    }
    printf("The longest identical character:\'%c\', the length is %d.\n", c, max_len + 1);
}

int main(){
    identify_the_longest("11122221133111234");
    identify_the_longest("ababaaaacccaaddd");
    return 0;
}
