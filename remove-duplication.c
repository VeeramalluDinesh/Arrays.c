#include<stdio.h>
int main()
{
int size;
printf("Enter the size of the array \n");
scanf("%d",&size);
int a[size];
for(int i=0;i<=size-1;i++)
{
printf("Enter the %d value :\n",(i+1));
scanf("%d",&a[i]);
}
for(int i=0;i<=size-1;i++)
{
if(a[i]!=0)
{
for(int j=i+1;j<=size-1;j++)
{
if(a[i]==a[j])
{
a[j]=0;}
} 
}
}
for(int i=0;i<=(size-1);i++){
printf("%d \t",a[i]);}
return 0;
}