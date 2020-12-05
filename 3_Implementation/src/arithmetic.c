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
int modulorem(int operand1, int operand2)
{
    if (0== operand2)
        return 0;
    else
    {
        return operand1 % operand2;
    }
    
}
