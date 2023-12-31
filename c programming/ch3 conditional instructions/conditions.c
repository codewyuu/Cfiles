Decision making instructions in are:
-if else statement
-switch statement

EXAMPLE 1:
c program to check whether a number is even or odd.

#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d", &a);

    if(a%2==0){ //double equals to means "equals to" in C, here the condition means if on dividing a by 2= 0 then a is an even number.
        printf("%d is an even number", a);
    }
    else{
        printf("%d is an odd number\n", a);
    }
    return 0;
}

EXAMPLE 2:
C program to tell if you are eligible for driving a vehicle or not.

#include<stdio.h>
int main(){
    int a;
    printf("Enter your age please\n");
    scanf("%d", &a);
    if(a>=18){
        printf("Congratulations! you are eligible for driving a vehicle");
    }
    else{
        printf("come again when you are 18 years old kiddo.\n");
    }
    return 0;
}
// PROGRAM WITH MULTIPLE IF STATEMENTS:

#include<stdio.h>
int main(){
    int a;
    printf("Enter your age please\n");
    scanf("%d", &a);
    if(a>=18){
        printf("Congratulations! You are eligible for driving a vechicle.\n");
    }
    if(a==16){ //ON USING = INSTEAD OF == IT WILL PRINT THE FIRST TWO PRINT STATEMENTS BECAUSE = IS A ASSIGNMENT OPERATOR NOT A RELATIONAL ONE.
        printf("Sorry but you are not eligible for driving a geared vehicle but you can always apply for non geared ones.\n");
    }
    else{
        printf("come again when you are 18 years old kiddo.\n");
    }
    return 0;
}
---------------------------------------------------------------------------------------------------------------------
RELATIONAL OPERATORS IN C

-relational operators are used to evaluate conditions (true or false) inside the if statements.
example: ==(equals to), >= (greater than equals to), <= (less than equals to), <, >, != (not equals to).

//NOTE: = is used for assignment where as == is used for equality check.
---------------------------------------------------------------------------------------------------------------------
LOGICAL OPERATORS:
&&(and), ||(or), and !(not) are three logical operators used in c, they are used to provide logic to our c programs.

#include<stdio.h>
int main(){
    int age;
    printf("Please enter your age\n");
    scanf("%d", &age);

    if(age>=90){
        printf("people of age above 90 cannot drive, sorry for inconvinience\n");
    }
    else{
        printf("you can drive!\n");
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------------------
//NOW WITH LOGICAL OPERATORS

#include<stdio.h>
int main(){
    int age;
    int vipPass=0; /*HERE 0 AND 1 WORKS LIKE YES AND NO, IF I ASSIGNED THE VALUE OF vipPass here as 0 meaning yes
     but later when stating conditions i passed the vipPass value as 0 it will be just invalid*/
    printf("Please enter your age\n");
    scanf("%d", &age);

    if((age>=18 && age<=70)|| vipPass==0){ /* OR just needs one conditions to be true for example
     on passing the value of age=10 initially the code wouldn't work but if i passed the condition OR it wouldn't matter
     if the first condition "(age>=18 && age<=70)" is true or not beccause
      here now that vipPass value is same as assigned in the beginning*/
        printf("you can drive!\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
}
--------------------------------------------------------------------------------------------------------------------
//     !(not operator)

#include<stdio.h>
int main(){
    int age;
    int vipPass=0;
    printf("Please enter your age\n");
    scanf("%d", &age);

    if((age>=18 && age<=70)|| !vipPass==0){ //on using ! operator here the result we get i s just opposite to what we got before.
        printf("you can drive!\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
}

ELSE IF-----------------------------------------------------------------------------------------------------------------

#include<stdio.h>
int main(){
    int num;
    printf("Enter your number\n");
    scanf("%d", &num);

    if(num==1){
        printf("the number you entered is 1.\n");
    }
    else if(num==2){
        printf("the number you entered is 2.\n");
    }
    else if(num==3){
        printf("the number you entered is 3.\n");
    }
    else{
        printf("the number you entered is not 1, 2 or 3!\n");
    }
    return 0;
}

OPERATOR PRECEDENCE----------------------------------------------------------------------------------------------------

priority          operators
1                   !
2                   =, /, %
3                   =, -
4                   < >, <=,>=
5                   ==, !=     
6                   &&
7                   ||
8                   =


CONDITIONAL OPERATORS---------------------------------------------------------------------------------------------------

a short hand if-else can be written using thr conditional or ternary operators.
example:
condition? expression- if-true: expression-if-false // here the ternary operators are '?' and ':'

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    //one liner condition ahead
    (num<5) ? printf("the number is less than 5"):printf("the number is not less than 5"); /*here (num<5) means if the num
     is less than 5 then print "the number is less than 5" if not then print "the number is not less than 5*/
    return 0;
}

SWITCH CASE CONTROL INSTRUCTION--------------------------------------------------------------------------------------------

#include<stdio.h>
int main(){
    int rating;
    printf("enter your ratings\n");
    scanf("%d", &rating);

    switch(rating){
        case 1:
        printf("your rating is 1.\n");
        break;
        case 2:
        printf("your rating is 2.\n");
        break;
        case 3:
        printf("your rating is 3.\n");
        break;
        case 4:
        printf("your rating is 4.\n");
        break;
        case 5:
        printf("your rating is 5.\n");
        break;
        default:
        printf("invalid rating!\n"); /*case 6 doesn't exist so we use default fxn,
         however here on running the code and entering any number greater than 3, it prints all the statements
          even the default one so we have to put a line break after every case to stop this from occuring.*/
        break;
    }
    return 0;
}

/*NOTE: the value of integer-expression is matched against C1, C2, C3... if it matches any of these cases
 that case along with all subsequent 'case' and 'default' statemnt are executed.*/

 //we can use switch case statements even by writing cases in any order of our choice(not necessarily ascending).
 //char values are allowed as they can be easily evaluated to an integer.
 //a switch can occur within another but in practice, this is rarely done.

 lets try creating a switch case program using char statemnts instead of integers.

 #include<stdio.h>
 int main(){
    char a[]= "yuu"; /*alright so to operate a string we need to put squared brackets
     right after the variable we have used and have to enclose the value of the variable with double quotes.*/
    printf("my name is %s\n", a); // '%s' is used for printing strings
    return 0;
 }

 #include<stdio.h>
 int main(){
    char name;
    printf("enter your name\n");
    scanf("%d", &name);

    switch(name){
        case 1:
        printf("your name is bread\n");
        break;
        case 2:
        printf("your name is jesse\n");
        break;
        case 3:
        printf("your name is gus fring\n");
        break;
        case 4:
        printf("your name is walter white\n");
        break;
        case 5:
        printf("your name is a bad boy goated with the sauce\n");
        break;
        case 6:
        printf("your name is incel\n");
        break;
        case 7:
        printf("your name is despacito\n");
        break;
        default:
        printf("invalid\n");
        break;
    }
    return 0;
 }

Q. write a program to find grade of a student given his marks based on below:
90-100-->A 
80-90-->B 
70-80-->C 
60-70-->D 
>70-->F 

#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch(marks){
        case 90 ... 100:   //here ... is used for range.
        printf("your grade is A\n");
        break;
        case 80 ... 89:
        printf("your grade is B\n");
        break;
        case 70 ... 79:
        printf("your grade is C\n");
        break;
        case 60 ... 69:
        printf("your grade is D\n");
        break;
        default
        :
        printf("invalid marks\n");
    }
    return 0;
}