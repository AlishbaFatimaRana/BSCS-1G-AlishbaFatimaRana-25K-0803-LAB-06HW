#include <stdio.h>

int main(){
    int num, sum=0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf("\n%d is a perfect number. ", num);
    }
    else{
        printf("\n%d is not a perfect number. ", num);
    }
    return 0;
}