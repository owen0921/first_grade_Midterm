#include<stdio.h>
#define false 0
#define true 1

int is_prime(int num){
    for(int i = 2; i < num / 2; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

void sum_of_two_prime(int num){
    int max_gap = 0;
    int record_big = 0;
    int record_small = 0;
    int gap = 0;

    for(int i = num; i > 0; i--){
        for(int j = 2; j < i; j++){
            if((i + j == num) && is_prime(i) && is_prime(j)){
                gap = i - j;
                if(gap > max_gap){
                    max_gap = gap;
                    record_big = i;
                    record_small = j;
                }
            }
        }
    }
    printf("The max gap of the pairs of primes given n = %d is %d - %d = %d\n", num, record_big, record_small, max_gap);
}

int main(){
    sum_of_two_prime(100);
    sum_of_two_prime(98);
    return 0;
}
