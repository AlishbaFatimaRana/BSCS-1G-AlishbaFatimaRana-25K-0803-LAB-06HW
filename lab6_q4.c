#include <stdio.h>

int main(){
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("\nTable of %d is:", i);

        for(j=1; j<=10; j++){
        printf("%d\n", j*i);
    }
    }
    

    return 0;
}