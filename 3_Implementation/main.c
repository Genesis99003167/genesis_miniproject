#include "calculator.h"


int main()
{
  int option,in1,in2,out;
    double triginput,trigoutput;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Square Root\n");
    printf("6.Modulus\n");
    printf("7.Factorial\n");
    printf("8.Exponent\n");
    printf("\nEnter you choice: ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
            printf("\nEnter two number to add");
            scanf("%d%d",&in1,&in2);
            out = addition(in1,in2);
            printf("%d",out);
            break;
            
        case 2:
            printf("\nEnter two number to subtract");
            scanf("%d%d",&in1,&in2);
            out = subtraction(in1,in2);
            printf("%d",out);
            break;
            
        case 3:
            printf("\nEnter two number to multiply");
            scanf("%d%d",&in1,&in2);
            out = multiplication(in1,in2);
            printf("%d",out);
            break;
            
        case 4:
            printf("\nEnter two number to Divide");
            scanf("%d%d",&in1,&in2);
            out = division(in1,in2);
            printf("%d",out);
            break;
            
        case 5:
            printf("\nEnter a number for squareroot");
            scanf("%lf",&triginput);
            trigoutput = square_root(triginput);
            printf("%lf",trigoutput);
            break;
            
        case 6:
            printf("\nEnter two number to Mod");
            scanf("%d%d",&in1,&in2);
            out = modulorem(in1,in2);
            printf("%d",out);
            break;
            
            
        case 7:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = factorial(in1);
            printf("%d",out);
            break;

        case 8:
            printf("\nEnter a number for factorial");
            scanf("%d",&in1);
            out = Expo(in1);
            printf("%d",out);
            break;
            
    }
    return 0;
}