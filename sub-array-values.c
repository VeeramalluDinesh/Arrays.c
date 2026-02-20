// writing a program to print the sub array values which are in series of numerical order.
#include <stdio.h>
int main()
{
    int size;
    printf("Enter a size of the array:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
    {
        printf("Enter a %d value:\n",(i+1));
        scanf("%d",&a[i]);
    }
    for(int i=0;i<(size-1);i++)
    {
        if(a[i]+1==a[i+1])
        {
            printf("%d,%d",a[i],a[i+1]);
            i++;
        }
        else if(a[i]-1==a[i-1])
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
