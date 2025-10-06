#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for(; num != 0; num = num / 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    if(original == reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is NOT a palindrome.\n");

    return 0;
}
