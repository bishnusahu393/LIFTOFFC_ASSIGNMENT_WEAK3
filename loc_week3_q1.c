//  Write a program in C to find the GCD of two numbers using recursion.
#include <stdio.h>
int hcf(int n1, int n2);
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("G.C.D of %d and %d is %d.", num1, num2, hcf(num1, num2));
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}