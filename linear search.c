#include<stdio.h>
void main()
{
    int n, e, a[25];
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &e);

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == e)
        {
            printf("%d found at position %d", e, i);
            break;
        }
    }
}