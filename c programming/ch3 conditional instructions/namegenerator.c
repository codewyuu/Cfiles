#include<stdio.h>
 int main(){
    char name;
    printf("choose a random number from 1 to 7.\n");
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