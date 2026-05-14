#include<stdio.h>
int main () {
    int n ,sum = 0;
    int i = 10;
    printf("enter no. of terms");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i = i + 10;
    }
    printf ("sum = %d is %d",n,sum);
}