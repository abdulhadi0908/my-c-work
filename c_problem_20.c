//sum of even natural numbers
#include<stdio.h>
int main () {
    int n ,sum = 0;
    int i = 2;
    printf("enter no. of terms");
    scanf("%d",&n);
    while (i <= n) {
        sum = sum + i;
        i = i + 2;
    }
    printf ("sum = %d even natural numbers is %d",n,sum);
}