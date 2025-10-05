#include <stdio.h>

int main() {
    int n, i, j;
    int a = 1, b = 1, c;   
    int rowSize, val = 1;  

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            rowSize = 1;   
        } else {
            c = a + b;
            a = b;
            b = c;
            rowSize = b;
        }

        for (j = 1; j <= rowSize; j++) {
            printf("%d ", val);
            val++;
        }
        printf("\n");
    }

    return 0;
}
