//multiplication of natural numbers
#include<stdio.h>
int main () {
    int n ,sum = 1;
    int i = 1;
    printf("enter no. of terms\n");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum * i;
        i = i + 1;
    }
    printf ("factorial = %d natural numbers is %d",n,sum);
}