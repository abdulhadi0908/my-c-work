//find reverse of a number and check if the reverse is greater than the original number.

#include<stdio.h>
int main() {
    int num=721;
    int d, rev=0;
    int original=num;
    d=num%10;
    rev=d;
    num=num/10;
    d=num%10;
    rev=rev*10+d;
    num=num/10;
    d=num%10;
    rev=rev*10+d;
    printf("reverse=%d\n",rev);
    if(original>rev)
    printf("the reverse is less than the original number\n");
    else
        printf("the reverse is greater than the original number\n");

}