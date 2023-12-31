lets say i want to print number starting from 1 to 5 then i can easily print them using incrementation "++"

example:

#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);
    a++;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a++;
    printf("%d\n", a);
    a++;
    
    return 0;
}

but if i want to do the same thing upto 600 then we can not really write a code that long as it will lack in readability,
so we use loops in such cases, and we are going to practice about the same in this session.

types of loops are;
1. while loop
2. do-while loop
3. for loop

//WHILE LOOP

#include<stdio.h>
int main(){
    int a;
    a=11;
    while(a>10){
        printf("%d\n", a);
        a++;
    }
    return 0;
}

Q. write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.

#include<stdio.h>
int main(){
    int a=0;
    while(a<=20){
        if(a>=10){
            printf("the value of a is %d\n", a);
        }
        a++;
    }
    return 0;
}

//USING SCANF FUNCTION

Q. write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0.

#include<stdio.h>
int main(){
    int counter=0;
    int variable;
    printf("the value of the variable is\n");
    scanf("%d", &variable);

    if(variable>=10 && variable<=20) {

        while(variable<=20) {
            printf("count: %d\n", variable);
            variable++;
        }
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}

//INCREMENTATION

#include<stdio.h>
int main(){
    int i=5;
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i++);
    return 0;
}
/* on running this program it should have first printed 6 then 5 but it printed 5 first because
if we enter i++ somewhere in a statement and pass i++ on the same statement then the original value is printed,
 but if i would have passed ++i then it would have first given me 6.

++i (pre increment) means i = i+1, first the value increases by 1 then it is assigned
i++ (post increment) means i = i+1, first value is assigned then it is increased by 1 

examples: 
int a=1,b;
b=a ++ (first assign the value to b (b=a), which will be 1, therefore b=1
then the value of a will be increased by 1(a++ means a=a+1), therefore a=2)
printf("a=%d", a);
printf("b=%d", b);

int a=1,b;
b= a++ + a++
(first assign then increase, so value of a=1 then increase = 2, now value of a = 2 therefore a++ = 2 then +1 = 3)
a= 3
b=3 ( as first we will assign value of a to b = 1 now we have to add a++ to it and as our value of a=1 now so 1 + 1= 2 
now adding the two 1+2=3)

int a=1, b
b= ++a + ++a
(++a means fist the value of 'a' will be increased then it willbe assigned at the end, ~b= ++a + ++a, ++a=2 as a=1 now
the value has been increased and will be assigned in the next ++a which will be the last operation, therfore ++a = 2 +1= 3)
so a=3
b=6 (as ++a=3)
*/

NOW IF I WANNA INCREMENT BY SOME NUMBER:

#include<stdio.h>
int main(){
    int i=5;
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i++);
    i+=10; //--> increments i by 10
    printf("the value of i is %d\n", i);
return 0;
}

DO WHILE LOOP:

/*the syntax of do while loop looks like this:
do{
    //code;
    //code;
}while(condition);

do while and while are pretty similiar,
while: checks the condition then executes the code
do-while: executes the code then checks the condition
example; */

#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("the value of i is %d\n", i);
        i++;
    }while(i<10);

    return 0;
}

Q. wap to print first n natural number using do while loop

#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("the first 4 natural numbers are %d\n", i);
        i++;
    }while(i<5);
    return 0;
}

using scanf function;

#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);

    do{
        printf("the first n natural numbers are %d\n", i);
        i++;
    }while(i<=n); //n will decide the max limit here
    return 0;
}