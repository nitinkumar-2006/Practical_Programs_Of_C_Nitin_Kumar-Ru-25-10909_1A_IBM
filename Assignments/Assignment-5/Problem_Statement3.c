//Write a C program to count the number of words in a given string.
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
    char str[MAX];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
    }

    printf("Number of words in the string: %d\n", count + 1);
    return 0;
}