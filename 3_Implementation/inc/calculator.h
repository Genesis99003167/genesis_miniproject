#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <math.h>  
#include <stdlib.h> 


int addition(int , int );
int subtraction(int , int );
int multiplication(int , int );
int division(int , int );

int modulorem(int, int);
int power( int, int);
int evenodd(int);
int prime(int);
int factorial(int);

int ANDoperator(int,int);
int ORoperator(int,int);
int NOToperator(int);
int NANDoperator(int,int);
int NORoperator(int,int);
int XORoperator(int,int);
int XNORoperator(int,int);

int square(int);
int cube(int );
float LOGfunction(int);
float Expo(int );
float square_root(float);
float KMtoMconv(float operand1);
float METERtoKM(float operand1);
float KMPHtoMPH(double operand1);
float MPHtoKMPH(double operand1);


float sine(float);
float cosine(float);
float tangent(float);
float sineh(float);
float cosineh(float);
float tangenth(float);
float logten(float);





#endif  /* #define __CALCULATOR_H__ */
