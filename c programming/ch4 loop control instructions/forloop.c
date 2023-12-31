FOR LOOP:
the syntax for for loop is:

for(initialize; test; increment or decrement){
    //code;
    //code;
    //code;
}

here initialize = setting a loop couter to an initial value
test= checking a condition

#include<stdio.h>
int main(){
    for(int a=0; a<10; a++){
        printf("the value of a is %d\n", a);
    }
    return 0;
}

 this loop is like a more compact version of while loop

 #include<stdio.h>
 int main(){
    for(int z=0; z<=69; z++){
        printf("the value of z is %d\n", z);
    }
    return 0;
 }

now using scanf:

#include<stdio.h>
int main(){
    for(int y=0, z=10; y<=z; y++){
        printf("the natural numbers are %d\n", y);
    }
    return 0;
}

for first then natural numbers excluding 0 but initialisation of variable must be 0

#include<stdio.h>
int main(){
    for(int y=0; y<10; y++){
        printf("the natural numbers are %d\n", y+1);
    }
    return 0;
}

now in reverse order 

#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for(int i=n; i; i--){
        printf("the naturals number is : %d\n", i);
    }
    return 0;
}

or

#include<stdio.h>
int main(){
    for(int i=10; i>=0; i--){
        printf("the naturals number is : %d\n", i);
    }
    return 0;
}


BREAK STATEMENT TO STOP LOOPS
//it is used to exist a loop whether a condition is true or false

//example of using break statement in do while loop :

#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("the value of i is %d\n", i);
        i++;
    }while(i<=10);
    return 0;
}

with break:

#include<stdio.h>
int main(){
    int i=0;
    do{
        printf("the value of i is %d\n", i);
        i++;
        if(i==4){
            break;
        }
    }while(i<=10);
    return 0;
}

now using for loop

#include<stdio.h>
int main(){
    for(int i=0; i<100; i++){
        printf("the numbers is %d\n", i);
        if(i==69){
            break;
        }
    }
    return 0;
}

Continue statement in C
used to immediately move to the next iteration of the loop

example;

#include<stdio.h>
int main(){
    int skip=5;
    int i=0;

    while(i<10){
        i++;
        if(i!=skip){
            continue;
        }
        else{
            printf("the number is %d\n", i);
        }
    }
    return 0;
}

the above program gives us only a single output rather than printing the all the numbers from 0 to 9

