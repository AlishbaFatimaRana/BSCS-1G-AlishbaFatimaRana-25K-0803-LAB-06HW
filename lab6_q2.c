#include <stdio.h>

int main(){
    int num, remainder, sum=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0){
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("\nSum = %d", sum);

    return 0;

}