#include <stdio.h>

int main(void) {
    int n, num, first, last, x= 1, mid;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = num % 10;

    while(num >= 10) {
        num = num / 10;
        x = x * 10;
    }
    first = num;

    mid = n % x;
    mid = mid / 10;

    n = last * x + mid * 10 + first;

    printf("After swapping first and last digit: %d", n);

    return 0;
}
