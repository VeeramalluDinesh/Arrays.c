//printing the values if target sum is achieved otherwise print(-1)?
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=(size-1);i++)
    {
        printf("Enter the %d value:\n",(i+1));
        scanf("%d",&a[i]);
    }
    int a1,b1;
    int flag=0;
    int k;
    printf("Enter your target value:\n");
    scanf("%d",&k);
    for(int i=0;i<(size-1);i++)
    {
        for(int j=i+1;j<=(size-1);j++)
        {
            if(a[i]+a[j]==k)
            {
                a1=a[i];
                b1=a[j];
                flag++;
            }
        }
    }
    if(flag!=0)
    {
        printf("a1=%d\t b1=%d",a1,b1);
    }
    else{
        printf("-1");
    }
    return 0;
}