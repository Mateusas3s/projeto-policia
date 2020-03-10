#include<stdio.h>
#include<stdlib.h>

#define LIMIT 1000

int main(void){

    int sum = 0;

    for(int i = 1; i < LIMIT; i++){

        if(i%3==0 || i%5==0){
            sum += i;
        }
    }
    
    printf("A soma dos múltiplos de 3 e 5 abaixo de 1000 são %d \n", sum);

    return 0;
}