#include<stdio.h>
int main()
{
    int i,j,n,a,arr[i];
    printf("Enter no of elements in the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(j=i-1;j>=0;--j)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
