#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <math.h>  
#include <stdlib.h> 


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int modulorem(int operand1, int operand2)
int power( int base, int exponent)
int evenodd(int operand1)
int prime(int operand1)
int factorial(int operand1)

int ANDoperator(int operand1,int operand2);
int ORoperator(int operand1,int operand2);
int NOToperator(int operand1);
int NANDoperator(int operand1,int operand2);
int NORoperator(int operand1,int operand2);
int XORoperator(int operand1,int operand2);
int XNORoperator(int operand1,int operand2);
int square(float operand1);
int squareroot(float operand1);
int cube(float operand1);
int LOGfunction(float operand1);
int Expo(float operand1);







float sine(float);
float cosine(float);
float tangent(float);
float sineh(float);
float cosineh(float);
float tangenth(float);
float logten(float);
float squareroot(float);




#endif  /* #define __CALCULATOR_H__ */
