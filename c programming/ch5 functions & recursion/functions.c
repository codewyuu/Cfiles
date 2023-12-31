#include<stdio.h>
void display(); //function prototype

int main(){
    int a;
    printf("initializing display function---\n");
    display(); //function call
    printf("display function finishes its work...\n");
    return 0;
}

void display(){ //function definition
    printf("this is display.\n");
}

//QUICK QUIZ

#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){ //main is the entry point in c programs.
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning(){
    printf("Good morning user\n");
}

void goodafternoon(){
    printf("Good afternoon user\n");
}

void goodnight(){
    printf("Good night user\n");
}

//CALLING FUNCTION INSIDE ANOTHER FUNCTION

#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){ //main is the entry point in c programs.
    goodmorning();
    return 0;
}

void goodmorning(){
    printf("Good morning user\n");
    goodafternoon();
}

void goodafternoon(){
    printf("Good afternoon user\n");
    goodnight();
}

void goodnight(){
    printf("Good night user\n");
}

//here 'main' called goodmorning directly but goodafternoon & goodnight indirectly.

/*I M P O R T A N T  P O I N T S
1. execution of a c program starts from main().
2. a c program can have more than one function
3. every function gets called directly or indirectly from main().

    T Y P E S  O F  F U N C T I O N S
        1. library functions: commonly req. functions grouped together in a library file on the disk. example: printf()
        2. user definied functions: these are the types of the functions declared and definied by the user. example: rand()

W H Y  D O   W E  N E E D  F U N C T I O N S ?
    1. to avoid rewriting the function ina program again and again.
    2. to keep track of whart we are doing in a program.
    3. to test and check logic independently.


PASSSING VALUES TO THE FUNCTIONS
    we can pass values to a function and can get a value in return from a function.
    ex: int sum(int a, int b) here a and b are parametres

    the above prototype means that sum is a function whuch takes values a(of type int) and b(of type int) and returns
    a value of type int. 
*/

//SUM FUNCTION

#include<stdio.h>
// summ is a function which takes a abd b as input and returns as intergers as an output.
int sum(int a, int b); //FUNCTION PROTOTYPE

int main(){
    int c;
    c = sum(2, 5); //FUNCTION CALL, here 2 and 5 are arguments
    
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    printf("The value of c is %d\n", c);
    return c;
}
//the c variable in above functions are different from each other
/* N O T E
    1. parametres are the values or the variable placeholders in the function definition. ex: a & b
    2. arguments are the actual values passed to the function to make a call. ex: 2 and 5
    3. a function can return only one value at a time.
    4. if the passed variable is changed inside the function, the function call doesn't change the value
       in the calling function.