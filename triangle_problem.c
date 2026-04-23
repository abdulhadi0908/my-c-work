#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter three sides of a triangle:");
    scanf("%d %d %d", &a ,&b ,&c);

    if (a+b>c && b+c>a && a+c>b)

        if (a==b && b==c)
        printf("the triangle is equilateral\n");

        else if(a==b || b==c || a==c)
        printf("the triangle is isosceles");

        else
        printf("the triangle is scalene\n");

    else
    printf("invalid triangle\n");

    return 0;
}
