Q. wap to print multiplation table of a given number n;

#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("multiplication table's as follows: \n\n");
    for(int i=1; i; i++){
        printf("n x %d = %d\n", i, n*i);
        if(i==10){
            break; 
        }
    }
    return 0;
}

Q. wap to print multiplication table of 10 in reverse order.

#include<stdio.h>
int main(){
    printf("THE MULTIPLICATION TABLE OF 10 IN REVERSE:\n\n");
    for(int i=10; i; i--){
        printf("10 x %d = %d\n", i, 10*i);
    }
    return 0;
}

Q. a do while loop is executed,
1. atleast once //(answer)
2. atleast twice
3. atmost once

Q.can a task be done using one type of loop which can also be done using the other two type of loops. //(yes)

Q. wap a program to print sum of first ten natural number using while loop.

#include<stdio.h>
int main(){
    int i, sum=0, n=10;
    printf("enter the value of i\n");
    scanf("%d", &i);
    
    for(i; i<=n; i++){
        sum+=i;
    }
    printf("the value of sum(1 to 10) is %d", sum);
    return 0;
}

now using while loop

#include<stdio.h>
int main(){
    int i;
    printf("enter the value of i\n");
    scanf("%d", &i);
    int sum=0;
    int n=10;
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("the value of the sum(1 to 10) is %d", sum);
    return 0;
}

same program using the do while loop:

#include<stdio.h>
int main(){
    int i;
    printf("enter the vlue of i\n");
    scanf("%d", &i);
    int sum=0;
    int n=10;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("the value of the sum(1 to 10) is %d", sum);
    return 0;
 } 

Q. wap to calculate the sum of numbers occuring in the multiplication table of 8.

#include<stdio.h>
int main(){
    int sum=0;
    int n;

    printf("enter the value of n\n");
    scanf("%d", &n);
    printf("multiplication table's as follows\n\n");

    for(int i=1; i; i++){

        printf("%d x %d = %d\n",n, i, n*i);
        sum+=n*i;
        if(i==10){
            break;
        }
    }
    printf("\nthe sum of the numbers occuring in the multiplication table of %d is %d\n", n, sum);
    return 0;
}

Q. wap to calculate the factorial of a given number using a for loop.

#include<stdio.h>
int main(){
    int i=0, n, factorial=1;
    printf("enter the value of n\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        factorial*=i;
    }
    
    printf("The factorial of %d is %d\n", n, factorial);
    return 0;
}

Q10. wap to check whether a given number is prime or not.

#include<stdio.h>
int main(){
    //a prime number is a natural number which is greater than 1 and is not a product of two smaller natural number.
    int n=14, prime=1;
    for(int i=1; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("this i.s not a prime number");
    }
    else{
        printf("this is a prime number");
    }
    return 0;
}