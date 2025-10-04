#include <stdio.h>

int main(){
    int num, original, remainder;
    int reversed=0;

    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;

   while(num != 0){
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
   }

   if(original == reversed){
    printf("\nPalindrome. ");
   }
   else{
    printf("\nNot palindrome. ");
   }

    return 0;
}