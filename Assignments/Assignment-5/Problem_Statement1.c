//Write a C program to read n elements into an array and calculate the sum and average of the elements
#include <stdio.h>
#define MAX 1000

int main() {
    int arr[MAX];
    int n, i;
    long long sum = 0;
    double average;

    printf("Enter the number of elements (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (double)sum / n;

    printf("Sum of the elements: %lld\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}