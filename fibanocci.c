#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Sequence: ");

    for (int i = 1; i <= terms; i++) {
        printf("%d ", first);
        next = first + second; // Calculate the next term
        first = second;        // Update the first term
        second = next;         // Update the second term
    }
    
    printf("\n");
    return 0;
}
