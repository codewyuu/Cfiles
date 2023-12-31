//TYPE OF INSTRUCTIONS
//when all of the variables have value

#include<stdio.h>
int main(){
    int a=4; //type declaration instruction
    int b=a; //type declaration instruction
    int c=a; //type declaration instruction
    printf("the sum of a, b, c = %d\n", a+b+c);
    return 0;
}

#include<stdio.h>
int main(){
    int a=7, b, c;
    b=c=a;
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    printf("the value of c is %d\n", c);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------
//order of execution of variables
#include<stdio.h>
int main(){
    float a= 6.6;
    float b= a+3.4;
    printf("the value of b is %f\n", b);
    return 0;
}

//but if i would have declared the variable b first then it won't work.

//ARITHMETIC INSTRUCTIONS
/*for example when i say:

int i = (3*2)+1

here, the numbers are the operands and the arithmetical signs are operators(+ - * /) 
operands can be intergers or floating decimals ie; int/float

example:
int b=2, c=3
intz; z= b*c (legal)
int z; b*c (illegal)
*/
--------------------------------------------------------------------------------------------------------------------
//MODULAR DIVISION OPERATOR (%)
/*-gives the remainder of a division but cannot be applied on float
the remainder willl have same sign as numerator ex; -5%2 = -1 or 5%2 = 1

-no operator can be assumed to be present between numbers
example:*/

#include<stdio.h>
int main(){
    int a=4;
    int b=4;
    printf("the value of 4*5 is %d/n", (a).(b));
    return 0;
}
//the above program will ultimately show an error, '.' does not refers to as multiply here
//-there is also no operator to perform exponentiation in C language
ex: printf("the value of 4^5 id %d\n", 4^5)
/*the above statement will not show an error but will also not perform exponent calculations as it is a bit wise XOR operator,
 there is no '^' exponent operator in C*/

//THERE IS NO OPERATOR TO PERFORM EXPONENTIATION IN C HOWEVER WE CAN USE pow(x,y) function from <math.h> (library)
example:
#include<stdio.h>
#include<math.h>
int main(){
    int a=4;
    int b=5;
    //printf("4^5 is %d\n", pow(4,5)); ---> here we'll have to use %f as it returns double
    printf("4^5 is %f\n", pow(4,5));
    return 0;
}
-------------------------------------------------------------------------------------------------------------
//TYPE CONVERSION

/* an arithmetic operation between:
Int and Int ---> Int
Int and float ---> float
float and float ---> float */

example:
#include<stdio.h>
int main(){
/*int and int*/  printf("6+5 gives %d\n", 6+5); 
/*int and float*/printf("6+5.6 is %f\n", 6+5.6);
/*float and float*/printf("6.1+5.6 is %f\n", 6.1+5.6);
    printf("the value of 5/2 is %d\n", 5/2); /*---> will give us the value as an integer, 2.*/
    printf("the value of 5/2 is %f\n", 5.0/2); /*---> now it'll give us the value in decimals*/
    printf("the value of 3.0/9 is %f\n", 3.0/9);
return 0;
}
similarly when i pass 2/5 and 2.0/5 it will give us 0 and 0.4 respectively
-----------------------------------------------------------------------------------------------------------------------
//OPERATOR PRECEDENCE

-BODMAS doesnt work in C, so we use operator precendence and associativity here 

priority     operators
1st          *, /, % (same priority but will calculate the expression left--->right ex; x*y/z---> (x*y)/z and x/y*z---> (x/y)*z)
2nd          +, - (same as above)
3rd          =
//operators of higher precedence are evaluated first in the absence of parenthesis.

#include<stdio.h>
int main(){
    int x=4;
    int y=9;
    printf("the value of 3x-8y is %d\n", 3*x-8*y); /*now here it could have thought of it as 3(x-8y) but c works
                                                    according to operator precedence that's why first it multiplied 3 with x and 8 with y.*/
   return 0;
}

//but if there would have been / and % too in that expression then we will have to break the tie between them with associativity

#include<stdio.h>
int main(){
    int x=2;
    int y=3;
    printf("the value of 3x/8y is %d\n", 8*y/3*x); //here acc. to us the answer should have been 24/6 = 4
    /*but c works acc. to operator precedence and associativity, so
    (8*3)/y *(x) = 24/3 * 2= 16 */
    return 0;
}
-----------------------------------------------------------------------------------------------------------------
//CONTROL INSTRUCTIONS
determines the flow of control in a program, four types of control instructions are:
1. sequence ctrl ins
2. decision ctrl ins
3. loop ctrl ins
4. case ctrl ins