#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i =0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    int min = a[0],index=0, max =0, index_max = 0;
    for(i = 0; i<n;i++)
    {
        if(min > a[i])
        { min = a[i];
            index = i;}

        if(max<a[i])
        { max = a[i];
            index_max = i;}
    }
    printf("minimum element is %d and it's position is %d\t\n",min,index);
    printf("maximum element is %d and it's position is %d\n",max,index_max);

}