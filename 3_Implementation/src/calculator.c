#include <stdio.h>
#include <math.h>  
#include <stdlib.h> 

int addition(int operand1, int operand2)
{
    return operand1+operand2;

}
int subtraction(int operand1, int operand2)
{
    return operand1-operand2;
}
int multiplication(int operand1, int operand2)
{
    return operand1*operand2;
}
int division(int operand1, int operand2)
{
    return operand1/operand2;
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
int power( int base, int exponent)
{
    int result=1;
    for(exponent; exponent>0;exponent--)
    {
        result=result*base;
    }
    return result;
}

int evenodd(int operand1)
{
    if (operand1 % 2==0)
        return 1;
    else
    {
        return 0;
    }
    
}
int factorial(int operand1)
{
    int fact=1;
    if ( operand1<0)
        return 0;
    else{
        for(int i=1;i<=operand1;++i){
            fact*=i;
        }
        return fact;
    }
}



int andoperator(int operand1, int operand2 )
{  
}

int oroperator(int operand1, int operand2)
{

}

int notoperator(int operand1, int operand2)
{

}

int nandoperator(int operand1, int operand2)
{

}

int noroperator(int operand1, int operand2)
{

}

int xoroperator(int operand1, int operand2)
{

}

int xnoroperator(int operand1, int operand2)
{

}


/* trigonometric functions*/
float sine(float value)
{
    return (sin (value*PI/180));
}
float cosine(float value)
{
    return (cos (x*PI/180));
}
float tangent(float value)
{
    return (tan(value*PI/180));
}
float sineh(float value)
{
    return (sinh(value));
}
float cosineh(float value)
{
    return (sinh(value));
}
float tangenth(float value)
{
    return (sinh(value));
}
float logten(float value)
{
    return (log10(value));
}
