#include <stdio.h>
#include <math.h>  
#include <stdlib.h> 

int addition(int a, float b)
{
    return a+b;

}
int subtraction(int a, int b)
{
    return a-b;
}
int multiplication(int a, int b)
{
    return a*b;
}
int division(int a, int b)
{
    return a/b;
}
void main()
{
    int a;
    float b;
    scanf("%d%d", &a, &b);
    int x= addition(a,b);
    printf("Sum:%d",x);

}