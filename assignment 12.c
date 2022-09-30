/* 1
#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    if(n>0){
    natural(n-1);
    printf("%d  ",n);
    }
}*/
/* 2
#include<stdio.h>
void naturalreverse(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    naturalreverse(n);
    return 0;
}
void naturalreverse(int n)
{
    if(n>0)
    {
        printf("%d  ",n);
        naturalreverse(n-1);
    }
}*/
/* 3
#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        odd(n-1);
        printf("%d  ",2*n-1);
    }
}*/
/* 4
#include<stdio.h>
void reverseodd(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    reverseodd(n);
    return 0;
}
void reverseodd(int n)
{
    if(n>0)
    {
        printf("%d  ",2*n-1);
        reverseodd(n-1);
    }
}*/
/* 5
#include<stdio.h>
void even(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    even(n);
    return 0;
}
void even(int n)
{
    if(n>=0)
    {
        even(n-1);
        printf("%d  ",2*n);
    }
}*/
/* 6
#include<stdio.h>
void reverseeven(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    reverseeven(n);
    return 0;
}
void reverseeven(int n)
{
    if(n>0)
    {
        printf("%d  ",2*n);
        reverseeven(n-1);
    }
}*/
/* 7
#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n)
{
    if(n==0)
    return;
    square(n-1);
    printf("%d*%d=%d\n",n,n,n*n);
}*/
/* 8
#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("enter n decimal numbers");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n)
{
     if(n>0)
     {


    binary(n/2);
    printf("%d ",n%2);
     }
}*/
/* 9
#include<stdio.h>
void octal(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    octal(n);
    return 0;
}
void octal(int n)
{
    if(n>0)
    {
        octal(n/8);
        printf("%d ",n%8);
    }
}*/
10
#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n==0)
        return ;
    printf("%d ",n%10);
    reverse(n/10);
}
