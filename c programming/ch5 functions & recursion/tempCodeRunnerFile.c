#include<stdio.h>
// summ is a function which takes a abd b as input and returns as intergers as an output.
int sum(int a, int b); //FUNCTION PROTOTYPE

int main(){
    int c;
    c = sum(2, 5); //FUNCTION CALL, here 2 and 5 are arguments
    
    return c;
}

int sum(int a, int b){
    int c;
    c = a + b;
    printf("The value of c is %d\n", c);
    return c;
}