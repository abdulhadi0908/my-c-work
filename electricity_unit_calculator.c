#include<stdio.h>

int main() {
    int units;
    float bill=0;

    printf("enter electricity units:");
    scanf("%d", &units);

    if (units <= 200)
        bill = units * 2.3;

    else if (units <= 400)
        bill = (200 * 2.3) + (units - 200) * 4;

    else
        bill = (200 * 2.3) + (200 * 4) + (units - 400) * 4.35;

    printf("total electricity bill = $%f\n",bill);

    return 0;
}