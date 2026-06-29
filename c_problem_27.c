#include<stdio.h>
float area_circle(int r) {
    float area;
    area = 3.14*r*r;
    return area;

}
int main() {
    float a,p;
    int r = 10;
    a = area_circle(r);
    printf("area of circle is %f",a);
}
