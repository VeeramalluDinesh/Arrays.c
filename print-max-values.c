//write a program to print the left side values of maximum values from given array
#include<stdio.h>
int main()
{
    int size;
    printf("Enter a size of the array:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
    {
        printf("Enter a number %d:\n",(i+1));
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int index=0;
    for(int i=0;i<=(size-1);i++)
    {
        if(a[i]>max){
            max=a[i];
            index=i;
        }
    }
    for(int i=0;i<index;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}