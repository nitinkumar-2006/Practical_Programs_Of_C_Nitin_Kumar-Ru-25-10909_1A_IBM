//Write a C program to read a string and check whether it is a palindrome or not.
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
    char str[MAX];
    int i, len, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    len = strlen(str) - 1; 
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}