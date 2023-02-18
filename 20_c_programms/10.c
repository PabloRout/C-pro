// Write a program to swap two numbers using macro.

#include <stdio.h>

#define SWAP(x, y) { int temp = x; x = y; y = temp; }

int main() {
    int a = 10;
    int b = 20;

    printf("Before swap: a = %d \t b = %d\n", a, b);

    SWAP(a, b);

    printf("After swap: a = %d \t b = %d\n", a, b);

    return 0;
}