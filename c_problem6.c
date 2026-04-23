#include <stdio.h>

int main(){

    float a= 2.5, b= 3.5, c= 4, d=5;
    float result;
    result= (a+b/c+d)+(a*a/d);
    printf("%f", result);
    return 0;

}