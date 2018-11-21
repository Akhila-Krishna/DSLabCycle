#include<stdio.h>
#include<stdlib.h>


int stk[50];
int max=50;
int top=-1;
int T[10],B[10];


void display()
{


}

void push(int x, int i)
{
    if(T[i]==B[i+1])
        printf("Stack Full\n");
    T[i]++;
    stk[T[i]]=x;
    display();
}


void pop(int i)
{

} 


int main()
{
    int k,n,c,x,m,i;
    printf("Enter the number of stacks you need to implement\n");
    scanf("%d",&k);
    n=max/k;
    for(int i=0;i<k;i++)
        B[i]=T[i]=n*(i-1);
    printf("Enter\n    1:PUSH\n    2:POP\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("Enter the element to be pushed\n");
                scanf("%d",&x);
                printf("Enter the stack to which you need to push\n");
                scanf("%d",&m);
                push(x,m);
                break;
        case 2: printf("enter the stack from which you need to pop\n");
                scanf("%d",&m);
                pop(m);
                break;
    }
    return 0;
}