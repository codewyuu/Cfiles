//PROGRAM TO GET INPUT FROM USER
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("the sum of a and b is %d \n", a + b);
    return 0;
}
------------------------------------------------------------------------------------------------------
//for subtraction

#include<stdio.h>
int main(){
    int u, v;
    printf("Enter the value of u \n");
    scanf("%d", &u);
    printf("Enter the value of v \n");
    scanf("%d", &v);
    printf("the product of u and v is %d \n", u * v);
    return 0;
}

-------------------------------------------------------------------------------------------------------------
//combined program for addition, subtraction, multiplication and division, in which the compiler asks the user to input the values for each variable.

#include<stdio.h>
int main(){
    float a, b, c, d, e, f;
    printf("Enter the value of a \n");
    scanf("%f", &a);
    printf("Enter the value of b \n");
    scanf("%f", &b);
    printf("the value of a and b is %.2f\n", a*b);

    printf("Enter the value of c \n");
    scanf("%f", &c);
    printf("Enter the value of d \n");
    scanf("%f", &d);
    printf("the value of c and d is %.2f\n", d-c);

    printf("Enter the value of e \n");
    scanf("%f", &e);
    printf("Enter the value of f \n");
    scanf("%f", &f);
    printf("the value of e and f %.2f\n", e+f);

    return 0;
}

-----------------------------------------------------------------------------------------------------------------------
//program to divide two number to give us the quotient and remainder (not working for now, will check this out later)
#include<stdio.h>
int main(){
    float a = 15;
    float b = 2;
    float c = float((int)a%(int)b);
    printf("the division of a to b gives the quotient = %f \n", a/b);
    printf("the remainder is %f \n", c);
    return 0;
}