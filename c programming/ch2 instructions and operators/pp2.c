Q1. which of the following is invalid in c
a. int a; b=a;
b. int v= 3^3
c. char dt = '21 Dec 2023'
//option c is invalid as we can only pass a alphabets in char, option b is is still valid as ^ operator is a bit wise XOR operator in c.

Q2. what data type will 3.0/8-2 return?
//if it ask if the output will be int or float then float but in general the answer will be double as double data type areb high precision floating points.
//therefore, double data type.
#include<stdio.h>
int main(){
    float a= 3.0, b=8, c=2;
    printf("the value of 3.0/8-2 is %.2f\n", a/b-2);
    return 0;
}
Q3. write a program to check whether a number is divisible by 90 or not?

#include<stdio.h>
int main(){
    int num;
    printf("enter the divisor\n");
    scanf("%d", &num);
    printf("divisibility test returns: %d\n", 90%num);
    return 0;
}

Q4. explain step by step evaluation of 3*x/y-z+k, here x=2, y=3, z=3, k=1
#include<stdio.h>
int main(){
    int x=2,y=3,z=3,k=1;
    printf("the value of the expression 3x/y-z+k is %d\n", 3*x/y-z+k);
    return 0;
}
//                   OR

#include<stdio.h>
int main(){
    int x,y,z,k;
    printf("enter the value of x\n");
    scanf("%d", &x);
    printf("enter the value of y\n");
    scanf("%d", &y);
    printf("enter the value of z\n");
    scanf("%d", &z);
    printf("enter the value of k\n");
    scanf("%d", &k);
    printf("the value of the expression 3x/y-z+k is %d\n", 3*x/y-z+k);
    return 0;
}

Q5. 3.0 +1 is ?
- floating point number