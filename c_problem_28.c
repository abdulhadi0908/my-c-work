#include<stdio.h>
float area_circle(int r) {
    float area;
    area = 3.14*r*r;
    return area;
}
float perimeter_circle(int r) {
    return 2*3.14*r;
}
int main() {
    float a,p;
    int r = 10;
    a = area_circle(r);
    printf("area of a circle is %f\n",a);
    a = area_circle(20);
    printf("area of a circle is %f\n",a);
    p = perimeter_circle(r);
    printf("perimeter of a circle is %f",p);
}