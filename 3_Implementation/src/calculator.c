
#include "calculator.h"
#define PI 3.14


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
    if(operand2 == 0)
        return -1;
    else
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

int prime(int operand1)
{
    int flag=0;
    for (int i=2; i<= operand1 / 2; ++i )
    {
        if (operand1 % i ==0){
            flag=1;
            break;
        }
    }
    if(operand1 == 1)
    {
        return 2;
    }
    else
    {
        if (flag==0)
            return 1;
        else
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



int ANDoperator(int operand1, int operand2 )
{  
    return operand1&operand2;
}

int ORoperator(int operand1, int operand2)
{
    return operand1|operand2;
}

int NOToperator(int operand1)
{
    return ~operand1;
}

int NANDoperator(int operand1, int operand2)
{
     return ~(operand1&operand2);
}

int NORoperator(int operand1, int operand2)
{
    return !(operand1|operand2);
}

int XORoperator(int operand1, int operand2)
{
    return operand1^operand2;
}

int XNORoperator(int operand1, int operand2)
{
    return ~(operand1^operand2);
}

int square(int operand1)
{
    return operand1*operand1;
}


float square_root(float operand1)
{
    if(operand1<=0)
        return 0;
    else 
        return sqrt(operand1);
} 

int cube(int operand1)
{
    return operand1*operand1*operand1;
}

float LOGfunction(int operand1)
{
    if(operand1<=0)
        return operand1;
    else
        return log(operand1);
}

float Expo(int operand1)
{
    if(operand1==0)
        return 1;
    else 
        return exp(operand1);
} 

/*Kilometer to meter conversion*/
float KMtoMconv(float operand1)
{   if(operand1<=0)
        return 0;
    else 
        return operand1*1000; 
}

/*Meter to kilometer conversion*/
float METERtoKM(float operand1)
{    if(operand1<=0)
        return 0;
    else 
        return operand1/1000;
}

/*KMPH to MPH conversion */
float KMPHtoMPH(double operand1)
{    if(operand1<=0)
        return 0;
    else 
        return operand1*0.6213712; 
}

/*MPH to KMPH conversion */



/* trigonometric functions*/
float sine(float value)
{
    return (sin (value*PI/180));
}
float cosine(float value)
{
    return (cos (value*PI/180));
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
    return (cosh(value));
}
float tangenth(float value)
{
    return (tanh(value));
}
float logten(float value)
{
    return (log10(value));
}
