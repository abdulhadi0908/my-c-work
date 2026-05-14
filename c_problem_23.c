// #include<stdio.h>
// int main() {
//     int i=1, t;
//     while (i<=10) {
//         t = 2*i;
//         printf("2*%d=%d\n",i,t); //printf("2*%d=%d,i,2*i); //printf("%d*%d=%d",2i,2*i);
//         i = i+1;
//     }
// }

// #include<stdio.h>
// int main() {
//     int i=1,t,x,n;
//     printf("enter no: ");
//     scanf("%d",&x);
//     printf("enter number of terms: ");
//     scanf("%d",&n);
//     while (i<=n) {
//         t = x*i;
//         printf("%dx%d=%d\n",x,i,t);
//         i = i+1;
//     }
// }

#include<stdio.h>
int main() {
    int i=1,t,x;
    printf("enter no: ");
    scanf("%d",&x);
    while (i<=10) {
        t = x*i;
        printf("%dx%d=%d\n",x,i,t);
        i = i+1;
    }
}