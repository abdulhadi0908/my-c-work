#include<stdio.h>
int main() {
    int n, i = 0;
    printf("enter number of elements ;");
    scanf("%d",&n);
    int a[n];
    for (i = 0;i<n;i++) {
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    int min = a[0],index = 0;
    for (i = 0; i<n; i++) {
        if(min > a[i]){
            min = a [i];
            index = 1;
          }
    }
    printf("minimum element is %d and its position is %d",min,index);
}
