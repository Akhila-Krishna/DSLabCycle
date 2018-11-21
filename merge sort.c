#include<stdio.h>
void main()
{
    int n,a[100],key,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter th enumber of elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>0 && a[i]<key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
    
}