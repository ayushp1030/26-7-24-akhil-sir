#include <stdio.h>

void swap(int *a, int *b) {
    // Print initial values
    printf("Before swap: a = %d, b = %d\n", *a, *b);
    
    // Swap the values using XOR
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    
    // Print swapped values
    printf("After swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 5;
    int y = 10;

    // Call the swap function
    swap(&x, &y);

    return 0;
}

