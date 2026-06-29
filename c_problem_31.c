#include<stdio.h>
int main() {
    int i=1,j;
    while (i<=3) {
        j=10;
        while (j<=12) {
            printf("i=%d\tj=%d\t",i,j);
            j++;
        }
        printf("\n");
        i++;
    }
}