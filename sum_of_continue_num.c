#include<stdio.h>

void countConsecutive(int num){
    int sum = 0;
    int j = 0;
    int count = 0;

    for(int i = 1; i <= num / 2; i++){
        sum = i;
        j = i + 1;
        while(sum < num){
            sum += j;
            j++;
        }
        if(sum == num){
            printf("%d to %d\n", i, j - 1);
            count++;
        }
    }
    if(count == 0){
        printf("No consecutive numbers sum!\n\n");
    }
    else{
        printf("There are total %d set(s).\n\n", count);
    }
}

int main(){
    countConsecutive(99);
    return 0;
}
