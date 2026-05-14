//find sum of digits of a digit number

#include <stdio.h>

    int main() {

        int num = 2357;
        int d, sum = 0;

        d = num % 10;
        sum = sum + d;

        num = num / 10;
        d = num % 10;
        sum = sum + d;

        num = num / 10;
        d = num % 10;
        sum = sum + d;

        num = num / 10;
        d = num % 10;
        sum = sum + d;

        printf("sum=%d", sum);

    }
