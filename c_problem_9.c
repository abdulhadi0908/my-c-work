 #include<stdio.h>
#include<math.h>

int main(){

float a=2, b=3, c=4;
float result;
result=(a*a + b*b - 2*a*b)/ pow (a + b, 2);
printf("%f", result);

return 0;
}