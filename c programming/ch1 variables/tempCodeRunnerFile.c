#include <stdio.h> 
 
int main(){ 
    int a = 4;
    /*int a = 8.5*/
    //you can't store decimal digits in int, to store decimal numbers in variables we use float
    float b = 8.5;
    //to store characters in variables we use 'char'
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    //now to print integer type variable one time
    printf("the value of a is %d", a); 
    /*this gave the output as "the value of a is 4" here %d represent the value of integer type variable 'a'
    now if i want to print the output of a side by side two times?*/
    printf("the value of a is %d %d",a, a);
    //the output that we received turned out to be '4 4'
    /*printf("the value of b is %d", b);
     now if i want to print the value that we provided to variable b then here i can't use %d
     to represent a decimal digit because %d reprents any integer value and 8.5 is not an integer and on using %d
     for a decimal digit it returns us 0 as output, the correct code for it is as follows :*/
     printf("the value of b is %f", b);
     /*now as you can see we got our output but all of it is in a very congested manner as the compiler
     thinks of the code as a single sentence and to give us the output of each variable in a seperate line we need to use
     '\n' knows as new line*/
     printf("the value of a is %d \n", a);
     printf("the value of b is %f \n", b);
     //now on running the code it will give us both of the output in new line
     //and to print characters we will use %c
     printf("the value of c is %c \n", c);

     //CALCULATIONS
     //yes we can also perform basic calculations using c, example:
     printf("the sum of a and b is %d \n", a + b); //this will give us 0 as we can't do sum of two different type of numbers like a decial and an integer
     //therefore, first we have to define a new variable here to be added with 'a' and i will be creating the new variable 'd' above, right after char c = 'u'
     printf("the sunm of a and d will be %d \n", a + d);
     //we can also calculate value directly while defining the variable ex: int e = 45 + 4; then i'll just to write printf("the value of e is %d \n", e);
     printf("the value of e is %d \n", e); //(the variable is defined right after d)
     
    return 0; 
} 