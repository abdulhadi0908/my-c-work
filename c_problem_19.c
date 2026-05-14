//sum of odd natural numbers
#include<stdio.h>
int main () {
    int n ,sum = 0;
    int i = 1;
    printf("enter no. of terms");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    printf ("sum = %d odd natural numbers is %d",n,sum);
}