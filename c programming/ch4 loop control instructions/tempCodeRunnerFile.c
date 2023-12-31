#include<stdio.h>
int main(){
    //aprime number is a natural number which is greater than 1 and is not a product of two smaller natural number.
    int n=14, prime=1;
    for(int i=1; i<n; i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        printf("this is not a prime number");
    }
    else{
        printf("this is a prime number");
    }
    return 0;
}