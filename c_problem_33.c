#include<stdio.h>
int main() {
    int one_back = 1,two_back = 0,new_term,n,i;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("%d\t%d",two_back,one_back);
    for (i=3;i<=n;i++) {
        new_term = one_back + two_back;
        printf("%d",new_term);
        two_back = one_back;
        one_back = new_term;

    }
}